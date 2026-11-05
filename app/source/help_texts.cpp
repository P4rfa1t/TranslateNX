#include "help_texts.h"

std::map<std::string, const char*> HELP_TEXTS;

void initHelpTexts() {
    HELP_TEXTS["TR"] = u8R"(### 1. Aşama: Kritik Ön Hazırlık (Zorunlu)
Uygulamayı kullanmaya başlamadan önce Switch'inizin çökmesini (crash) önlemek için UltraHand bellek ayarını değiştirmeniz şarttır.

UltraHand menüsünü açın.
+ tuşuna basarak ayarlara, ardından System bölümüne girin.
Overlay Memory (Arayüz Belleği) değerini 4MB'den 8MB'a yükseltin.

### 2. Aşama: Gerekli API'lerin Alınması
TranslateNX'in en iyi performansla çalışması için iki farklı sisteme ihtiyacı vardır:
OCR (Optik Karakter Tanıma): Ekrandaki yazıları tarayıp düzenlenebilir ve kopyalanabilir metne dönüştürür.
Çeviri Sistemi: Taranan metni anında istediğiniz dile çevirir.
(Tavsiyemiz: En iyi, en hızlı ve ücretsiz deneyim için OCR olarak Google Cloud Vision, çeviri için ise DeepL kullanmanızdır. Diğer alternatifleri de aşağıda bulabilirsiniz.)

## OCR API Seçenekleri

## 1. Google Cloud Vision (Aylık 1000 Kullanım) — ⭐ ÖNERİLEN
Google Cloud Vision adresine gidin ve "Try Vision AI Free" butonuna tıklayıp gerekli kayıt işlemlerini tamamlayın.
Açılan Cloud Vision API sayfasında "Enable" (Etkinleştir) butonuna basın.
Sol menüden Credentials (Kimlik Bilgileri) sekmesine girin. Üst kısımdan Create Credentials > API Key yolunu izleyin.
API'nize bir isim verin. Select API restrictions kısmından Cloud Vision API'yi seçin ve OK'a, ardından Create'e basın. API anahtarınız saniyeler içinde ekranda belirecektir.

## 2. OCR.space (Günlük 500 Kullanım) — Alternatif
OCR.space Free Key adresinden kayıt olun.
E-posta adresinize gelen onay bağlantısına tıklayın. Onayladıktan saniyeler sonra API anahtarınızın bulunduğu ikinci bir e-posta alacaksınız.

## Çeviri API Seçenekleri

## 1. DeepL (Tek Seferlik 1.000.000 Karakter) — ⭐ ÖNERİLEN
Not: 1 milyon karakterlik kota genellikle sizi çok uzun süre idare edecektir. Kota dolduğunda yeni bir ücretsiz hesap açabilir veya ücretli plana geçebilirsiniz.
DeepL sitesine gidip kayıt olun. Sağ üstteki profil simgenize, ardından Hesap butonuna tıklayın.
Sol alt köşedeki API Plans menüsüne girin ve ücretsiz plana abone olun (Kayıt için bazı bilgiler isteyebilir ancak ücret kesmez).
Açılan ekranda API Keys & Limits sekmesine tıklayın ve Create Key butonuna basın.
API'nize bir isim verin, "All access" seçeneğini işaretleyin ve Create Key'e tıklayın.

## 2. Google Cloud Translate (Aylık 500.000 Karakter) — Alternatif
Not: Kayıt sırasında kart bilgisi isteyebilir ve küçük bir provizyon ücreti kesip iade edebilir. Aylık kotayı aşmadığınız sürece tamamen ücretsizdir. Eğer bunu kullanacaksanız kotanızı ara ara kontrol etmenizi öneririz.
Google Cloud Translate adresine gidin ve "Try Translation API" butonuna tıklayıp kayıt işlemlerini tamamlayın.
Cloud Translation API sayfasında "Enable" butonuna basın.
Credentials sekmesine girip Create Credentials > API Key yolunu izleyin.
API'nize isim verin, kısıtlamalar bölümünden Cloud Translation API'yi seçip Create butonuna basın. Anahtarınız ekranda belirecektir.

## 3. MyMemory (Günlük 5.000 Karakter) — Kurtarıcı
Bu sistem TranslateNX içinde hazır kurulu gelir. API anahtarı almanıza gerek yoktur.
Uygulama içindeki Çeviri API ayarlarından direkt seçerek zor anlarda pratik bir şekilde kullanabilirsiniz.

### 3. Aşama: API Anahtarları Nereye Girilecek?
Aldığınız API anahtarlarını uygulamaya tanıtmak için aşağıdaki iki yöntemden birini tercih edebilirsiniz:
Yöntem 1 (Switch Üzerinden): Hbmenu üzerinden TranslateNX uygulamasına girerek API anahtarlarınızı doğrudan uygulama arayüzünden ilgili yerlere yazabilirsiniz.
Yöntem 2 (Bilgisayar Üzerinden - Pratik Yol): Switch'inizi bilgisayarınıza bağlayın. SdCard/config/translate yolundaki config.ini dosyasını bilgisayarınızın masaüstüne alın. Dosyayı bir metin belgesi olarak açıp API anahtarlarını gerekli yerlere yapıştırın, kaydedin ve dosyayı tekrar Switch'teki aynı klasörün içine atın.

### 4. Aşama: Uygulamanın Kullanımı
Önemli Not: Cihazınızda UltraHand ve SysModule'ün yüklü olduğundan emin olun.
UltraHand'i Açın: Parmağınızı ekranın sol kenarından sağa doğru kaydırarak veya L + R + D-Pad Aşağı + Sağ Analog (R-Stick) kombinasyonuna basarak UltraHand arayüzünü çağırın.
TranslateNX'i Başlatın: Listeden Translate seçeneğinin üzerine gelin ve uygulamayı açın. (İpucu: Üzerindeyken Y tuşuna basarak hızlı erişim için kısayol atayabilirsiniz).
Ayarları Yapılandırın: Ayarlar bölümüne girin. Aldığınız OCR ve Çeviri API'lerini seçin.
Dilleri Belirleyin:
Kaynak Dil: Oynadığınız oyunun orijinal dili.
Hedef Dil: Çevirinin yapılmasını istediğiniz kendi diliniz.
Çeviriye Başlayın: Oyunda çevirmek istediğiniz bir metin ekrandayken TranslateNX arayüzünü açın ve "Çeviriye Başla" butonuna basın.
Not: İşlem ilk seferinde biraz yavaş olabilir, çeviri hızı kullandığınız API'ye ve internet bağlantınıza göre değişiklik gösterecektir.
Sonucu Görüntüleyin: Kısa bir süre sonra ekranda tespit edilen yazıların listesi karşınıza çıkacaktır. Çevirisini detaylı görmek istediğiniz metnin üzerine tıklamanız yeterlidir.)";
    HELP_TEXTS["EN"] = u8R"(### Stage 1: Critical Preparation (Mandatory)
Before you start using the app, it is essential to change the UltraHand memory setting to prevent your Switch from crashing.

Open the UltraHand menu.
Press + to enter settings, then System.
Increase Overlay Memory from 4MB to 8MB.

### Phase 2: Obtaining Required APIs
TranslateNX needs two different systems to run at best performance:
OCR (Optical Character Recognition): Scans the text on the screen and converts it into editable and copyable text.
Translation System: Instantly translates the scanned text into the language you want.
(Our advice: For the best, fastest and free experience, use Google Cloud Vision for OCR and DeepL for translation. You can find other alternatives below.)

## OCR API Options

## 1. Google Cloud Vision (1000 Monthly Uses) — STAR RECOMMENDED
Go to Google Cloud Vision and click on the "Try Vision AI Free" button and complete the necessary registration procedures.
On the Cloud Vision API page that opens, click the "Enable" button.
Enter the Credentials tab from the left menu. From the top, follow the path Create Credentials > API Key.
Give your API a name. Select Cloud Vision API from the Select API restrictions section and press OK, then Create. Your API key will appear on the screen within seconds.

## 2. OCR.space (500 Uses per Day) — Alternative
Sign up at OCR.space Free Key.
Click on the confirmation link sent to your e-mail address. Seconds after confirming, you will receive a second email with your API key.

## Translation API Options

## 1. DeepL (1,000,000 One-Time Characters) — STAR RECOMMENDED
Note: A 1 million character quota will usually last you a very long time. When the quota is reached, you can open a new free account or switch to a paid plan.
Go to the DeepL website and register. Click on your profile icon in the top right, then click the Account button.
Enter the API Plans menu in the lower left corner and subscribe to the free plan (It may ask for some information for registration, but it does not charge a fee).
On the screen that opens, click on the API Keys & Limits tab and press the Create Key button.
Give your API a name, check "All access" and click Create Key.

## 2. Google Cloud Translate (500,000 Characters per Month) — Alternative
Note: It may ask for card information during registration and charge a small provisioning fee for a refund. It is completely free as long as you do not exceed the monthly quota. If you are going to use this, we recommend that you check your quota from time to time.
Go to Google Cloud Translate and click on the "Try Translation API" button and complete the registration process.
Click the "Enable" button on the Cloud Translation API page.
Go to the Credentials tab and follow the path Create Credentials > API Key.
Name your API, select Cloud Translation API from the restrictions section and press the Create button. Your key will appear on the screen.

## 3. MyMemory (5,000 Characters per Day) — Savior
This system comes ready-installed in TranslateNX. You do not need to obtain an API key.
You can use it practically in difficult moments by selecting it directly from the Translation API settings within the application.

### Phase 3: Where to Enter API Keys?
You can choose one of the following two methods to introduce the API keys you receive to the application:
Method 1 (Via Switch): You can enter the TranslateNX application via Hbmenu and write your API keys to the relevant places directly from the application interface.
Method 2 (Through Computer - Practical Way): Connect your Switch to your computer. Import the config.ini file in the SdCard/config/translate path to your computer's desktop. Open the file as a text document, paste the API keys where necessary, save and put the file back into the same folder on the Switch.

### Phase 4: Use of the Application
Important Note: Make sure UltraHand and SysModule are installed on your device.
Open UltraHand: Call up the UltraHand interface by sliding your finger from the left edge of the screen to the right or by pressing the combination L + R + D-Pad Down + Right Analog (R-Stick).
Launch TranslateNX: Point to Translate from the list and open the application. (Tip: You can assign a shortcut for quick access by pressing Y while on it).
Configure Settings: Enter the Settings section. Select the OCR and Translation APIs you received.
Specify Languages:
Source Language: The original language of the game you are playing.
Target Language: Your own language in which you want the translation to be made.
Start Translating: While the text you want to translate in the game is on the screen, open the TranslateNX interface and press the "Start Translation" button.
Note: The process may be a little slow the first time, translation speed will vary depending on the API you use and your internet connection.
View the Result: After a short while, the list of detected texts will appear on the screen. Just click on the text you want to see its translation in detail.)";
    HELP_TEXTS["ZH"] = u8R"(### 第 1 步：关键准备（必做）
开始使用应用前，必须调大 UltraHand 的内存限制，以防止 Switch 崩溃。

打开 UltraHand 菜单。
按 + 进入设置，然后进入 System（系统）。
将 Overlay Memory（悬浮层内存）从 4MB 调高到 8MB。

### 第 2 步：获取所需的 API
TranslateNX 需要两套服务才能以最佳性能运行：
OCR（光学字符识别）：扫描屏幕上的文字，并将其转换为可编辑、可复制的文本。
翻译服务：将扫描到的文本即时翻译成你想要的语言。
（建议：为了获得最佳、最快且免费的体验，OCR 推荐使用 Google Cloud Vision，翻译推荐使用 DeepL。其他替代方案见下方。）

## OCR API 选项

## 1. Google Cloud Vision（每月 1000 次）— ⭐ 推荐
前往 Google Cloud Vision 页面，点击 "Try Vision AI Free" 并完成注册流程。
在打开的 Cloud Vision API 页面点击 "Enable"（启用）。
从左侧菜单进入 Credentials（凭据）标签页，在顶部依次选择 Create Credentials > API Key。
为 API 命名，在 Select API restrictions 中选择 Cloud Vision API，点击 OK，然后点击 Create。几秒钟后即可看到你的 API 密钥。

## 2. OCR.space（每天 500 次）— 备选
前往 OCR.space Free Key 页面注册。
点击邮件中的确认链接。确认后几秒钟内，你会收到第二封包含 API 密钥的邮件。

## 翻译 API 选项

## 1. DeepL（一次性 100 万字符）— ⭐ 推荐
注意：100 万字符的额度通常可以用很久。额度用完后，可以注册新的免费账户或升级为付费套餐。
前往 DeepL 网站注册。点击右上角的头像，然后点击 Account（账户）。
进入左下角的 API Plans 菜单，订阅免费套餐（可能会要求填写一些信息，但不会收费）。
在打开的页面中点击 API Keys & Limits 标签页，然后点击 Create Key。
为 API 命名，勾选 "All access"，然后点击 Create Key。

## 2. Google Cloud Translate（每月 50 万字符）— 备选
注意：注册时可能会要求填写银行卡信息，并可能有一笔小额预授权，之后会退还。只要不超过每月额度就是完全免费的。如果使用该服务，建议偶尔检查一下额度。
前往 Google Cloud Translate，点击 "Try Translation API" 并完成注册流程。
在 Cloud Translation API 页面点击 "Enable"（启用）。
进入 Credentials 标签页，依次选择 Create Credentials > API Key。
为 API 命名，在限制中选择 Cloud Translation API，然后点击 Create。密钥会显示在屏幕上。

## 3. MyMemory（每天 5000 字符）— 应急方案
该服务已内置于 TranslateNX，无需申请 API 密钥。
在应用的翻译 API 设置中直接选择即可，适合应急使用。

### 第 3 步：在哪里填写 API 密钥？
可以通过以下两种方式之一把获取到的 API 密钥填入应用：
方法 1（在 Switch 上）：通过 Hbmenu 打开 TranslateNX 应用，直接在界面中填写 API 密钥。
方法 2（在电脑上，更方便）：将 Switch 连接到电脑。把 SdCard/config/translate 路径下的 config.ini 文件复制到电脑桌面。用文本编辑器打开，将 API 密钥粘贴到对应位置，保存后再放回 Switch 的同一文件夹。

### 第 4 步：应用的使用方法
重要提示：请确保设备上已安装 UltraHand 和 SysModule。
打开 UltraHand：从屏幕左边缘向右滑动手指，或按下 L + R + 十字键下 + 右摇杆（R-Stick）组合键，呼出 UltraHand 界面。
启动 TranslateNX：在列表中选中 Translate 并打开应用。（提示：选中时按 Y 键可设置快捷方式，方便快速访问。）
配置设置：进入设置页面，选择你获取的 OCR 和翻译 API。
设置语言：
源语言：你正在玩的游戏的原始语言。
目标语言：你希望翻译成的母语。
开始翻译：当游戏中出现需要翻译的文字时，打开 TranslateNX 界面并点击“开始翻译”按钮。
注意：首次翻译可能会稍慢一些，翻译速度取决于你使用的 API 和网络连接。
查看结果：稍等片刻，屏幕上会列出识别到的文字。点击想要查看详细翻译的文字即可。)";
}
