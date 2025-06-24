#include "Exxx.h"

void CExampleAppView::TextModifierL(TDesC& aText)
{

	_LIT(KText_e100,"e100");
	_LIT(KText_E100,"E100");
	_LIT(KText_100,"100");
	_LIT(KText_e101,"e101");
	_LIT(KText_E101,"E101");
	_LIT(KText_101,"101");
	_LIT(KText_e102,"e102");
	_LIT(KText_E102,"E102");
	_LIT(KText_102,"102");
	_LIT(KText_e104,"e104");
	_LIT(KText_E104,"E104");
	_LIT(KText_104,"104");
	_LIT(KText_e110,"e110");
	_LIT(KText_E110,"E110");
	_LIT(KText_110,"110");
	_LIT(KText_e120,"e120");
	_LIT(KText_E120,"E120");
	_LIT(KText_120,"120");
	_LIT(KText_e122,"e122");
	_LIT(KText_E122,"E122");
	_LIT(KText_122,"122");
	_LIT(KText_e123,"e123");
	_LIT(KText_E123,"E123");
	_LIT(KText_123,"123");
	_LIT(KText_e124,"e124");
	_LIT(KText_E124,"E124");
	_LIT(KText_124,"124");
	_LIT(KText_e127,"e127");
	_LIT(KText_E127,"E127");
	_LIT(KText_127,"127");
	_LIT(KText_e129,"e129");
	_LIT(KText_E129,"E129");
	_LIT(KText_129,"129");
	_LIT(KText_e131,"e131");
	_LIT(KText_E131,"E131");
	_LIT(KText_131,"131");
	_LIT(KText_e132,"e132");
	_LIT(KText_E132,"E132");
	_LIT(KText_132,"132");
	_LIT(KText_e133,"e133");
	_LIT(KText_E133,"E133");
	_LIT(KText_133,"133");
	_LIT(KText_e140,"e140");
	_LIT(KText_E140,"E140");
	_LIT(KText_140,"140");
	_LIT(KText_e141,"e141");
	_LIT(KText_E141,"E141");
	_LIT(KText_141,"141");
	_LIT(KText_e142,"e142");
	_LIT(KText_E142,"E142");
	_LIT(KText_142,"142");
	_LIT(KText_e150,"e150");
	_LIT(KText_E150,"E150");
	_LIT(KText_150,"150");
	_LIT(KText_e150a,"e150a");
	_LIT(KText_E150a,"E150a");
	_LIT(KText_150a,"150a");
	_LIT(KText_e150b,"e150b");
	_LIT(KText_E150b,"E150b");
	_LIT(KText_150b,"150b");
	_LIT(KText_e150c,"e150c");
	_LIT(KText_E150c,"E150c");
	_LIT(KText_150c,"150c");
	_LIT(KText_e150d,"e150d");
	_LIT(KText_E150d,"E150d");
	_LIT(KText_150d,"150d");
	_LIT(KText_e151,"e151");
	_LIT(KText_E151,"E151");
	_LIT(KText_151,"151");
	_LIT(KText_e153,"e153");
	_LIT(KText_E153,"E153");
	_LIT(KText_153,"153");
	_LIT(KText_e154,"e154");
	_LIT(KText_E154,"E154");
	_LIT(KText_154,"154");
	_LIT(KText_e155,"e155");
	_LIT(KText_E155,"E155");
	_LIT(KText_155,"155");
	_LIT(KText_e160,"e160");
	_LIT(KText_E160,"E160");
	_LIT(KText_160,"160");
	_LIT(KText_e160a,"e160a");
	_LIT(KText_E160a,"E160a");
	_LIT(KText_160a,"160a");
	_LIT(KText_e160b,"e160b");
	_LIT(KText_E160b,"E160b");
	_LIT(KText_160b,"160b");
	_LIT(KText_e160c,"e160c");
	_LIT(KText_E160c,"E160c");
	_LIT(KText_160c,"160c");
	_LIT(KText_e160d,"e160d");
	_LIT(KText_E160d,"E160d");
	_LIT(KText_160d,"160d");
	_LIT(KText_e160e,"e160e");
	_LIT(KText_E160e,"E160e");
	_LIT(KText_160e,"160e");
	_LIT(KText_e160f,"e160f");
	_LIT(KText_E160f,"E160f");
	_LIT(KText_160f,"160f");
	_LIT(KText_e161,"e161");
	_LIT(KText_E161,"E161");
	_LIT(KText_161,"161");
	_LIT(KText_e161b,"e161b");
	_LIT(KText_E161b,"E161b");
	_LIT(KText_161b,"161b");
	_LIT(KText_e161g,"e161g");
	_LIT(KText_E161g,"E161g");
	_LIT(KText_161g,"161g");
	_LIT(KText_e162,"e162");
	_LIT(KText_E162,"E162");
	_LIT(KText_162,"162");
	_LIT(KText_e163,"e163");
	_LIT(KText_E163,"E163");
	_LIT(KText_163,"163");
	_LIT(KText_e170,"e170");
	_LIT(KText_E170,"E170");
	_LIT(KText_170,"170");
	_LIT(KText_e171,"e171");
	_LIT(KText_E171,"E171");
	_LIT(KText_171,"171");
	_LIT(KText_e172,"e172");
	_LIT(KText_E172,"E172");
	_LIT(KText_172,"172");
	_LIT(KText_e173,"e173");
	_LIT(KText_E173,"E173");
	_LIT(KText_173,"173");
	_LIT(KText_e174,"e174");
	_LIT(KText_E174,"E174");
	_LIT(KText_174,"174");
	_LIT(KText_e175,"e175");
	_LIT(KText_E175,"E175");
	_LIT(KText_175,"175");
	_LIT(KText_e180,"e180");
	_LIT(KText_E180,"E180");
	_LIT(KText_180,"180");
	_LIT(KText_e200,"e200");
	_LIT(KText_E200,"E200");
	_LIT(KText_200,"200");
	_LIT(KText_e202,"e202");
	_LIT(KText_E202,"E202");
	_LIT(KText_202,"202");
	_LIT(KText_e203,"e203");
	_LIT(KText_E203,"E203");
	_LIT(KText_203,"203");
	_LIT(KText_e210,"e210");
	_LIT(KText_E210,"E210");
	_LIT(KText_210,"210");
	_LIT(KText_e211,"e211");
	_LIT(KText_E211,"E211");
	_LIT(KText_211,"211");
	_LIT(KText_e212,"e212");
	_LIT(KText_E212,"E212");
	_LIT(KText_212,"212");
	_LIT(KText_e213,"e213");
	_LIT(KText_E213,"E213");
	_LIT(KText_213,"213");
	_LIT(KText_e214,"e214");
	_LIT(KText_E214,"E214");
	_LIT(KText_214,"214");
	_LIT(KText_e215,"e215");
	_LIT(KText_E215,"E215");
	_LIT(KText_215,"215");
	_LIT(KText_e216,"e216");
	_LIT(KText_E216,"E216");
	_LIT(KText_216,"216");
	_LIT(KText_e217,"e217");
	_LIT(KText_E217,"E217");
	_LIT(KText_217,"217");
	_LIT(KText_e218,"e218");
	_LIT(KText_E218,"E218");
	_LIT(KText_218,"218");
	_LIT(KText_e219,"e219");
	_LIT(KText_E219,"E219");
	_LIT(KText_219,"219");
	_LIT(KText_e220,"e220");
	_LIT(KText_E220,"E220");
	_LIT(KText_220,"220");
	_LIT(KText_e221,"e221");
	_LIT(KText_E221,"E221");
	_LIT(KText_221,"221");
	_LIT(KText_e222,"e222");
	_LIT(KText_E222,"E222");
	_LIT(KText_222,"222");
	_LIT(KText_e223,"e223");
	_LIT(KText_E223,"E223");
	_LIT(KText_223,"223");
	_LIT(KText_e224,"e224");
	_LIT(KText_E224,"E224");
	_LIT(KText_224,"224");
	_LIT(KText_e226,"e226");
	_LIT(KText_E226,"E226");
	_LIT(KText_226,"226");
	_LIT(KText_e227,"e227");
	_LIT(KText_E227,"E227");
	_LIT(KText_227,"227");
	_LIT(KText_e228,"e228");
	_LIT(KText_E228,"E228");
	_LIT(KText_228,"228");
	_LIT(KText_e230,"e230");
	_LIT(KText_E230,"E230");
	_LIT(KText_230,"230");
	_LIT(KText_e231,"e231");
	_LIT(KText_E231,"E231");
	_LIT(KText_231,"231");
	_LIT(KText_e232,"e232");
	_LIT(KText_E232,"E232");
	_LIT(KText_232,"232");
	_LIT(KText_e234,"e234");
	_LIT(KText_E234,"E234");
	_LIT(KText_234,"234");
	_LIT(KText_e235,"e235");
	_LIT(KText_E235,"E235");
	_LIT(KText_235,"235");
	_LIT(KText_e239,"e239");
	_LIT(KText_E239,"E239");
	_LIT(KText_239,"239");
	_LIT(KText_e242,"e242");
	_LIT(KText_E242,"E242");
	_LIT(KText_242,"242");
	_LIT(KText_e249,"e249");
	_LIT(KText_E249,"E249");
	_LIT(KText_249,"249");
	_LIT(KText_e250,"e250");
	_LIT(KText_E250,"E250");
	_LIT(KText_250,"250");
	_LIT(KText_e251,"e251");
	_LIT(KText_E251,"E251");
	_LIT(KText_251,"251");
	_LIT(KText_e252,"e252");
	_LIT(KText_E252,"E252");
	_LIT(KText_252,"252");
	_LIT(KText_e260,"e260");
	_LIT(KText_E260,"E260");
	_LIT(KText_260,"260");
	_LIT(KText_e261,"e261");
	_LIT(KText_E261,"E261");
	_LIT(KText_261,"261");
	_LIT(KText_e262,"e262");
	_LIT(KText_E262,"E262");
	_LIT(KText_262,"262");
	_LIT(KText_e263,"e263");
	_LIT(KText_E263,"E263");
	_LIT(KText_263,"263");
	_LIT(KText_e270,"e270");
	_LIT(KText_E270,"E270");
	_LIT(KText_270,"270");
	_LIT(KText_e280,"e280");
	_LIT(KText_E280,"E280");
	_LIT(KText_280,"280");
	_LIT(KText_e281,"e281");
	_LIT(KText_E281,"E281");
	_LIT(KText_281,"281");
	_LIT(KText_e282,"e282");
	_LIT(KText_E282,"E282");
	_LIT(KText_282,"282");
	_LIT(KText_e283,"e283");
	_LIT(KText_E283,"E283");
	_LIT(KText_283,"283");
	_LIT(KText_e284,"e284");
	_LIT(KText_E284,"E284");
	_LIT(KText_284,"284");
	_LIT(KText_e285,"e285");
	_LIT(KText_E285,"E285");
	_LIT(KText_285,"285");
	_LIT(KText_e290,"e290");
	_LIT(KText_E290,"E290");
	_LIT(KText_290,"290");
	_LIT(KText_e296,"e296");
	_LIT(KText_E296,"E296");
	_LIT(KText_296,"296");
	_LIT(KText_e297,"e297");
	_LIT(KText_E297,"E297");
	_LIT(KText_297,"297");
	_LIT(KText_e300,"e300");
	_LIT(KText_E300,"E300");
	_LIT(KText_300,"300");
	_LIT(KText_e301,"e301");
	_LIT(KText_E301,"E301");
	_LIT(KText_301,"301");
	_LIT(KText_e302,"e302");
	_LIT(KText_E302,"E302");
	_LIT(KText_302,"302");
	_LIT(KText_e304,"e304");
	_LIT(KText_E304,"E304");
	_LIT(KText_304,"304");
	_LIT(KText_e306,"e306");
	_LIT(KText_E306,"E306");
	_LIT(KText_306,"306");
	_LIT(KText_e307,"e307");
	_LIT(KText_E307,"E307");
	_LIT(KText_307,"307");
	_LIT(KText_e308,"e308");
	_LIT(KText_E308,"E308");
	_LIT(KText_308,"308");
	_LIT(KText_e309,"e309");
	_LIT(KText_E309,"E309");
	_LIT(KText_309,"309");
	_LIT(KText_e310,"e310");
	_LIT(KText_E310,"E310");
	_LIT(KText_310,"310");
	_LIT(KText_e311,"e311");
	_LIT(KText_E311,"E311");
	_LIT(KText_311,"311");
	_LIT(KText_e312,"e312");
	_LIT(KText_E312,"E312");
	_LIT(KText_312,"312");
	_LIT(KText_e315,"e315");
	_LIT(KText_E315,"E315");
	_LIT(KText_315,"315");
	_LIT(KText_e316,"e316");
	_LIT(KText_E316,"E316");
	_LIT(KText_316,"316");
	_LIT(KText_e320,"e320");
	_LIT(KText_E320,"E320");
	_LIT(KText_320,"320");
	_LIT(KText_e321,"e321");
	_LIT(KText_E321,"E321");
	_LIT(KText_321,"321");
	_LIT(KText_e322,"e322");
	_LIT(KText_E322,"E322");
	_LIT(KText_322,"322");
	_LIT(KText_e325,"e325");
	_LIT(KText_E325,"E325");
	_LIT(KText_325,"325");
	_LIT(KText_e326,"e326");
	_LIT(KText_E326,"E326");
	_LIT(KText_326,"326");
	_LIT(KText_e327,"e327");
	_LIT(KText_E327,"E327");
	_LIT(KText_327,"327");
	_LIT(KText_e330,"e330");
	_LIT(KText_E330,"E330");
	_LIT(KText_330,"330");
	_LIT(KText_e331,"e331");
	_LIT(KText_E331,"E331");
	_LIT(KText_331,"331");
	_LIT(KText_e332,"e332");
	_LIT(KText_E332,"E332");
	_LIT(KText_332,"332");
	_LIT(KText_e333,"e333");
	_LIT(KText_E333,"E333");
	_LIT(KText_333,"333");
	_LIT(KText_e334,"e334");
	_LIT(KText_E334,"E334");
	_LIT(KText_334,"334");
	_LIT(KText_e335,"e335");
	_LIT(KText_E335,"E335");
	_LIT(KText_335,"335");
	_LIT(KText_e336,"e336");
	_LIT(KText_E336,"E336");
	_LIT(KText_336,"336");
	_LIT(KText_e337,"e337");
	_LIT(KText_E337,"E337");
	_LIT(KText_337,"337");
	_LIT(KText_e338,"e338");
	_LIT(KText_E338,"E338");
	_LIT(KText_338,"338");
	_LIT(KText_e339,"e339");
	_LIT(KText_E339,"E339");
	_LIT(KText_339,"339");
	_LIT(KText_e340,"e340");
	_LIT(KText_E340,"E340");
	_LIT(KText_340,"340");
	_LIT(KText_e341,"e341");
	_LIT(KText_E341,"E341");
	_LIT(KText_341,"341");
	_LIT(KText_e343,"e343");
	_LIT(KText_E343,"E343");
	_LIT(KText_343,"343");
	_LIT(KText_e350,"e350");
	_LIT(KText_E350,"E350");
	_LIT(KText_350,"350");
	_LIT(KText_e351,"e351");
	_LIT(KText_E351,"E351");
	_LIT(KText_351,"351");
	_LIT(KText_e352,"e352");
	_LIT(KText_E352,"E352");
	_LIT(KText_352,"352");
	_LIT(KText_e353,"e353");
	_LIT(KText_E353,"E353");
	_LIT(KText_353,"353");
	_LIT(KText_e354,"e354");
	_LIT(KText_E354,"E354");
	_LIT(KText_354,"354");
	_LIT(KText_e355,"e355");
	_LIT(KText_E355,"E355");
	_LIT(KText_355,"355");
	_LIT(KText_e356,"e356");
	_LIT(KText_E356,"E356");
	_LIT(KText_356,"356");
	_LIT(KText_e357,"e357");
	_LIT(KText_E357,"E357");
	_LIT(KText_357,"357");
	_LIT(KText_e363,"e363");
	_LIT(KText_E363,"E363");
	_LIT(KText_363,"363");
	_LIT(KText_e380,"e380");
	_LIT(KText_E380,"E380");
	_LIT(KText_380,"380");
	_LIT(KText_e385,"e385");
	_LIT(KText_E385,"E385");
	_LIT(KText_385,"385");
	_LIT(KText_e400,"e400");
	_LIT(KText_E400,"E400");
	_LIT(KText_400,"400");
	_LIT(KText_e401,"e401");
	_LIT(KText_E401,"E401");
	_LIT(KText_401,"401");
	_LIT(KText_e402,"e402");
	_LIT(KText_E402,"E402");
	_LIT(KText_402,"402");
	_LIT(KText_e403,"e403");
	_LIT(KText_E403,"E403");
	_LIT(KText_403,"403");
	_LIT(KText_e404,"e404");
	_LIT(KText_E404,"E404");
	_LIT(KText_404,"404");
	_LIT(KText_e405,"e405");
	_LIT(KText_E405,"E405");
	_LIT(KText_405,"405");
	_LIT(KText_e406,"e406");
	_LIT(KText_E406,"E406");
	_LIT(KText_406,"406");
	_LIT(KText_e407,"e407");
	_LIT(KText_E407,"E407");
	_LIT(KText_407,"407");
	_LIT(KText_e407a,"e407a");
	_LIT(KText_E407a,"E407a");
	_LIT(KText_407a,"407a");
	_LIT(KText_e410,"e410");
	_LIT(KText_E410,"E410");
	_LIT(KText_410,"410");
	_LIT(KText_e412,"e412");
	_LIT(KText_E412,"E412");
	_LIT(KText_412,"412");
	_LIT(KText_e413,"e413");
	_LIT(KText_E413,"E413");
	_LIT(KText_413,"413");
	_LIT(KText_e414,"e414");
	_LIT(KText_E414,"E414");
	_LIT(KText_414,"414");
	_LIT(KText_e415,"e415");
	_LIT(KText_E415,"E415");
	_LIT(KText_415,"415");
	_LIT(KText_e416,"e416");
	_LIT(KText_E416,"E416");
	_LIT(KText_416,"416");
	_LIT(KText_e417,"e417");
	_LIT(KText_E417,"E417");
	_LIT(KText_417,"417");
	_LIT(KText_e418,"e418");
	_LIT(KText_E418,"E418");
	_LIT(KText_418,"418");
	_LIT(KText_e420,"e420");
	_LIT(KText_E420,"E420");
	_LIT(KText_420,"420");
	_LIT(KText_e421,"e421");
	_LIT(KText_E421,"E421");
	_LIT(KText_421,"421");
	_LIT(KText_e422,"e422");
	_LIT(KText_E422,"E422");
	_LIT(KText_422,"422");
	_LIT(KText_e431,"e431");
	_LIT(KText_E431,"E431");
	_LIT(KText_431,"431");
	_LIT(KText_e432,"e432");
	_LIT(KText_E432,"E432");
	_LIT(KText_432,"432");
	_LIT(KText_e433,"e433");
	_LIT(KText_E433,"E433");
	_LIT(KText_433,"433");
	_LIT(KText_e434,"e434");
	_LIT(KText_E434,"E434");
	_LIT(KText_434,"434");
	_LIT(KText_e435,"e435");
	_LIT(KText_E435,"E435");
	_LIT(KText_435,"435");
	_LIT(KText_e436,"e436");
	_LIT(KText_E436,"E436");
	_LIT(KText_436,"436");
	_LIT(KText_e440,"e440");
	_LIT(KText_E440,"E440");
	_LIT(KText_440,"440");
	_LIT(KText_e442,"e442");
	_LIT(KText_E442,"E442");
	_LIT(KText_442,"442");
	_LIT(KText_e444,"e444");
	_LIT(KText_E444,"E444");
	_LIT(KText_444,"444");
	_LIT(KText_e450,"e450");
	_LIT(KText_E450,"E450");
	_LIT(KText_450,"450");
	_LIT(KText_e451,"e451");
	_LIT(KText_E451,"E451");
	_LIT(KText_451,"451");
	_LIT(KText_e452,"e452");
	_LIT(KText_E452,"E452");
	_LIT(KText_452,"452");
	_LIT(KText_e459,"e459");
	_LIT(KText_E459,"E459");
	_LIT(KText_459,"459");
	_LIT(KText_e460,"e460");
	_LIT(KText_E460,"E460");
	_LIT(KText_460,"460");
	_LIT(KText_e461,"e461");
	_LIT(KText_E461,"E461");
	_LIT(KText_461,"461");
	_LIT(KText_e463,"e463");
	_LIT(KText_E463,"E463");
	_LIT(KText_463,"463");
	_LIT(KText_e464,"e464");
	_LIT(KText_E464,"E464");
	_LIT(KText_464,"464");
	_LIT(KText_e465,"e465");
	_LIT(KText_E465,"E465");
	_LIT(KText_465,"465");
	_LIT(KText_e466,"e466");
	_LIT(KText_E466,"E466");
	_LIT(KText_466,"466");
	_LIT(KText_e468,"e468");
	_LIT(KText_E468,"E468");
	_LIT(KText_468,"468");
	_LIT(KText_e469,"e469");
	_LIT(KText_E469,"E469");
	_LIT(KText_469,"469");
	_LIT(KText_e470,"e470");
	_LIT(KText_E470,"E470");
	_LIT(KText_470,"470");
	_LIT(KText_e470a,"e470a");
	_LIT(KText_E470a,"E470a");
	_LIT(KText_470a,"470a");
	_LIT(KText_e470b,"e470b");
	_LIT(KText_E470b,"E470b");
	_LIT(KText_470b,"470b");
	_LIT(KText_e471,"e471");
	_LIT(KText_E471,"E471");
	_LIT(KText_471,"471");
	_LIT(KText_e472,"e472");
	_LIT(KText_E472,"E472");
	_LIT(KText_472,"472");
	_LIT(KText_e473,"e473");
	_LIT(KText_E473,"E473");
	_LIT(KText_473,"473");
	_LIT(KText_e474,"e474");
	_LIT(KText_E474,"E474");
	_LIT(KText_474,"474");
	_LIT(KText_e475,"e475");
	_LIT(KText_E475,"E475");
	_LIT(KText_475,"475");
	_LIT(KText_e476,"e476");
	_LIT(KText_E476,"E476");
	_LIT(KText_476,"476");
	_LIT(KText_e477,"e477");
	_LIT(KText_E477,"E477");
	_LIT(KText_477,"477");
	_LIT(KText_e479,"e479");
	_LIT(KText_E479,"E479");
	_LIT(KText_479,"479");
	_LIT(KText_e479b,"e479b");
	_LIT(KText_E479b,"E479b");
	_LIT(KText_479b,"479b");
	_LIT(KText_e481,"e481");
	_LIT(KText_E481,"E481");
	_LIT(KText_481,"481");
	_LIT(KText_e482,"e482");
	_LIT(KText_E482,"E482");
	_LIT(KText_482,"482");
	_LIT(KText_e483,"e483");
	_LIT(KText_E483,"E483");
	_LIT(KText_483,"483");
	_LIT(KText_e491,"e491");
	_LIT(KText_E491,"E491");
	_LIT(KText_491,"491");
	_LIT(KText_e492,"e492");
	_LIT(KText_E492,"E492");
	_LIT(KText_492,"492");
	_LIT(KText_e493,"e493");
	_LIT(KText_E493,"E493");
	_LIT(KText_493,"493");
	_LIT(KText_e494,"e494");
	_LIT(KText_E494,"E494");
	_LIT(KText_494,"494");
	_LIT(KText_e495,"e495");
	_LIT(KText_E495,"E495");
	_LIT(KText_495,"495");
	_LIT(KText_e500,"e500");
	_LIT(KText_E500,"E500");
	_LIT(KText_500,"500");
	_LIT(KText_e501,"e501");
	_LIT(KText_E501,"E501");
	_LIT(KText_501,"501");
	_LIT(KText_e503,"e503");
	_LIT(KText_E503,"E503");
	_LIT(KText_503,"503");
	_LIT(KText_e504,"e504");
	_LIT(KText_E504,"E504");
	_LIT(KText_504,"504");
	_LIT(KText_e507,"e507");
	_LIT(KText_E507,"E507");
	_LIT(KText_507,"507");
	_LIT(KText_e508,"e508");
	_LIT(KText_E508,"E508");
	_LIT(KText_508,"508");
	_LIT(KText_e509,"e509");
	_LIT(KText_E509,"E509");
	_LIT(KText_509,"509");
	_LIT(KText_e511,"e511");
	_LIT(KText_E511,"E511");
	_LIT(KText_511,"511");
	_LIT(KText_e512,"e512");
	_LIT(KText_E512,"E512");
	_LIT(KText_512,"512");
	_LIT(KText_e513,"e513");
	_LIT(KText_E513,"E513");
	_LIT(KText_513,"513");
	_LIT(KText_e514,"e514");
	_LIT(KText_E514,"E514");
	_LIT(KText_514,"514");
	_LIT(KText_e515,"e515");
	_LIT(KText_E515,"E515");
	_LIT(KText_515,"515");
	_LIT(KText_e516,"e516");
	_LIT(KText_E516,"E516");
	_LIT(KText_516,"516");
	_LIT(KText_e517,"e517");
	_LIT(KText_E517,"E517");
	_LIT(KText_517,"517");
	_LIT(KText_e520,"e520");
	_LIT(KText_E520,"E520");
	_LIT(KText_520,"520");
	_LIT(KText_e521,"e521");
	_LIT(KText_E521,"E521");
	_LIT(KText_521,"521");
	_LIT(KText_e522,"e522");
	_LIT(KText_E522,"E522");
	_LIT(KText_522,"522");
	_LIT(KText_e523,"e523");
	_LIT(KText_E523,"E523");
	_LIT(KText_523,"523");
	_LIT(KText_e524,"e524");
	_LIT(KText_E524,"E524");
	_LIT(KText_524,"524");
	_LIT(KText_e525,"e525");
	_LIT(KText_E525,"E525");
	_LIT(KText_525,"525");
	_LIT(KText_e526,"e526");
	_LIT(KText_E526,"E526");
	_LIT(KText_526,"526");
	_LIT(KText_e527,"e527");
	_LIT(KText_E527,"E527");
	_LIT(KText_527,"527");
	_LIT(KText_e528,"e528");
	_LIT(KText_E528,"E528");
	_LIT(KText_528,"528");
	_LIT(KText_e529,"e529");
	_LIT(KText_E529,"E529");
	_LIT(KText_529,"529");
	_LIT(KText_e530,"e530");
	_LIT(KText_E530,"E530");
	_LIT(KText_530,"530");
	_LIT(KText_e535,"e535");
	_LIT(KText_E535,"E535");
	_LIT(KText_535,"535");
	_LIT(KText_e536,"e536");
	_LIT(KText_E536,"E536");
	_LIT(KText_536,"536");
	_LIT(KText_e538,"e538");
	_LIT(KText_E538,"E538");
	_LIT(KText_538,"538");
	_LIT(KText_e541,"e541");
	_LIT(KText_E541,"E541");
	_LIT(KText_541,"541");
	_LIT(KText_e551,"e551");
	_LIT(KText_E551,"E551");
	_LIT(KText_551,"551");
	_LIT(KText_e552,"e552");
	_LIT(KText_E552,"E552");
	_LIT(KText_552,"552");
	_LIT(KText_e553,"e553");
	_LIT(KText_E553,"E553");
	_LIT(KText_553,"553");
	_LIT(KText_e553a,"e553a");
	_LIT(KText_E553a,"E553a");
	_LIT(KText_553a,"553a");
	_LIT(KText_e553b,"e553b");
	_LIT(KText_E553b,"E553b");
	_LIT(KText_553b,"553b");
	_LIT(KText_e554,"e554");
	_LIT(KText_E554,"E554");
	_LIT(KText_554,"554");
	_LIT(KText_e555,"e555");
	_LIT(KText_E555,"E555");
	_LIT(KText_555,"555");
	_LIT(KText_e556,"e556");
	_LIT(KText_E556,"E556");
	_LIT(KText_556,"556");
	_LIT(KText_e558,"e558");
	_LIT(KText_E558,"E558");
	_LIT(KText_558,"558");
	_LIT(KText_e559,"e559");
	_LIT(KText_E559,"E559");
	_LIT(KText_559,"559");
	_LIT(KText_e570,"e570");
	_LIT(KText_E570,"E570");
	_LIT(KText_570,"570");
	_LIT(KText_e574,"e574");
	_LIT(KText_E574,"E574");
	_LIT(KText_574,"574");
	_LIT(KText_e575,"e575");
	_LIT(KText_E575,"E575");
	_LIT(KText_575,"575");
	_LIT(KText_e576,"e576");
	_LIT(KText_E576,"E576");
	_LIT(KText_576,"576");
	_LIT(KText_e577,"e577");
	_LIT(KText_E577,"E577");
	_LIT(KText_577,"577");
	_LIT(KText_e578,"e578");
	_LIT(KText_E578,"E578");
	_LIT(KText_578,"578");
	_LIT(KText_e579,"e579");
	_LIT(KText_E579,"E579");
	_LIT(KText_579,"579");
	_LIT(KText_e585,"e585");
	_LIT(KText_E585,"E585");
	_LIT(KText_585,"585");
	_LIT(KText_e620,"e620");
	_LIT(KText_E620,"E620");
	_LIT(KText_620,"620");
	_LIT(KText_e621,"e621");
	_LIT(KText_E621,"E621");
	_LIT(KText_621,"621");
	_LIT(KText_e622,"e622");
	_LIT(KText_E622,"E622");
	_LIT(KText_622,"622");
	_LIT(KText_e623,"e623");
	_LIT(KText_E623,"E623");
	_LIT(KText_623,"623");
	_LIT(KText_e624,"e624");
	_LIT(KText_E624,"E624");
	_LIT(KText_624,"624");
	_LIT(KText_e625,"e625");
	_LIT(KText_E625,"E625");
	_LIT(KText_625,"625");
	_LIT(KText_e626,"e626");
	_LIT(KText_E626,"E626");
	_LIT(KText_626,"626");
	_LIT(KText_e627,"e627");
	_LIT(KText_E627,"E627");
	_LIT(KText_627,"627");
	_LIT(KText_e628,"e628");
	_LIT(KText_E628,"E628");
	_LIT(KText_628,"628");
	_LIT(KText_e629,"e629");
	_LIT(KText_E629,"E629");
	_LIT(KText_629,"629");
	_LIT(KText_e630,"e630");
	_LIT(KText_E630,"E630");
	_LIT(KText_630,"630");
	_LIT(KText_e631,"e631");
	_LIT(KText_E631,"E631");
	_LIT(KText_631,"631");
	_LIT(KText_e632,"e632");
	_LIT(KText_E632,"E632");
	_LIT(KText_632,"632");
	_LIT(KText_e633,"e633");
	_LIT(KText_E633,"E633");
	_LIT(KText_633,"633");
	_LIT(KText_e634,"e634");
	_LIT(KText_E634,"E634");
	_LIT(KText_634,"634");
	_LIT(KText_e635,"e635");
	_LIT(KText_E635,"E635");
	_LIT(KText_635,"635");
	_LIT(KText_e640,"e640");
	_LIT(KText_E640,"E640");
	_LIT(KText_640,"640");
	_LIT(KText_e650,"e650");
	_LIT(KText_E650,"E650");
	_LIT(KText_650,"650");
	_LIT(KText_e900,"e900");
	_LIT(KText_E900,"E900");
	_LIT(KText_900,"900");
	_LIT(KText_e901,"e901");
	_LIT(KText_E901,"E901");
	_LIT(KText_901,"901");
	_LIT(KText_e902,"e902");
	_LIT(KText_E902,"E902");
	_LIT(KText_902,"902");
	_LIT(KText_e903,"e903");
	_LIT(KText_E903,"E903");
	_LIT(KText_903,"903");
	_LIT(KText_e904,"e904");
	_LIT(KText_E904,"E904");
	_LIT(KText_904,"904");
	_LIT(KText_e905,"e905");
	_LIT(KText_E905,"E905");
	_LIT(KText_905,"905");
	_LIT(KText_e912,"e912");
	_LIT(KText_E912,"E912");
	_LIT(KText_912,"912");
	_LIT(KText_e914,"e914");
	_LIT(KText_E914,"E914");
	_LIT(KText_914,"914");
	_LIT(KText_e920,"e920");
	_LIT(KText_E920,"E920");
	_LIT(KText_920,"920");
	_LIT(KText_e927,"e927");
	_LIT(KText_E927,"E927");
	_LIT(KText_927,"927");
	_LIT(KText_e927b,"e927b");
	_LIT(KText_E927b,"E927b");
	_LIT(KText_927b,"927b");
	_LIT(KText_e938,"e938");
	_LIT(KText_E938,"E938");
	_LIT(KText_938,"938");
	_LIT(KText_e939,"e939");
	_LIT(KText_E939,"E939");
	_LIT(KText_939,"939");
	_LIT(KText_e941,"e941");
	_LIT(KText_E941,"E941");
	_LIT(KText_941,"941");
	_LIT(KText_e942,"e942");
	_LIT(KText_E942,"E942");
	_LIT(KText_942,"942");
	_LIT(KText_e943,"e943");
	_LIT(KText_E943,"E943");
	_LIT(KText_943,"943");
	_LIT(KText_e943a,"e943a");
	_LIT(KText_E943a,"E943a");
	_LIT(KText_943a,"943a");
	_LIT(KText_e943b,"e943b");
	_LIT(KText_E943b,"E943b");
	_LIT(KText_943b,"943b");
	_LIT(KText_e944,"e944");
	_LIT(KText_E944,"E944");
	_LIT(KText_944,"944");
	_LIT(KText_e948,"e948");
	_LIT(KText_E948,"E948");
	_LIT(KText_948,"948");
	_LIT(KText_e949,"e949");
	_LIT(KText_E949,"E949");
	_LIT(KText_949,"949");
	_LIT(KText_e950,"e950");
	_LIT(KText_E950,"E950");
	_LIT(KText_950,"950");
	_LIT(KText_e951,"e951");
	_LIT(KText_E951,"E951");
	_LIT(KText_951,"951");
	_LIT(KText_e952,"e952");
	_LIT(KText_E952,"E952");
	_LIT(KText_952,"952");
	_LIT(KText_e953,"e953");
	_LIT(KText_E953,"E953");
	_LIT(KText_953,"953");
	_LIT(KText_e954,"e954");
	_LIT(KText_E954,"E954");
	_LIT(KText_954,"954");
	_LIT(KText_e955,"e955");
	_LIT(KText_E955,"E955");
	_LIT(KText_955,"955");
	_LIT(KText_e957,"e957");
	_LIT(KText_E957,"E957");
	_LIT(KText_957,"957");
	_LIT(KText_e959,"e959");
	_LIT(KText_E959,"E959");
	_LIT(KText_959,"959");
	_LIT(KText_e965,"e965");
	_LIT(KText_E965,"E965");
	_LIT(KText_965,"965");
	_LIT(KText_e966,"e966");
	_LIT(KText_E966,"E966");
	_LIT(KText_966,"966");
	_LIT(KText_e967,"e967");
	_LIT(KText_E967,"E967");
	_LIT(KText_967,"967");
	_LIT(KText_e999,"e999");
	_LIT(KText_E999,"E999");
	_LIT(KText_999,"999");
	_LIT(KText_e1103,"e1103");
	_LIT(KText_E1103,"E1103");
	_LIT(KText_1103,"1103");
	_LIT(KText_e1105,"e1105");
	_LIT(KText_E1105,"E1105");
	_LIT(KText_1105,"1105");
	_LIT(KText_e1200,"e1200");
	_LIT(KText_E1200,"E1200");
	_LIT(KText_1200,"1200");
	_LIT(KText_e1201,"e1201");
	_LIT(KText_E1201,"E1201");
	_LIT(KText_1201,"1201");
	_LIT(KText_e1202,"e1202");
	_LIT(KText_E1202,"E1202");
	_LIT(KText_1202,"1202");
	_LIT(KText_e1404,"e1404");
	_LIT(KText_E1404,"E1404");
	_LIT(KText_1404,"1404");
	_LIT(KText_e1410,"e1410");
	_LIT(KText_E1410,"E1410");
	_LIT(KText_1410,"1410");
	_LIT(KText_e1412,"e1412");
	_LIT(KText_E1412,"E1412");
	_LIT(KText_1412,"1412");
	_LIT(KText_e1413,"e1413");
	_LIT(KText_E1413,"E1413");
	_LIT(KText_1413,"1413");
	_LIT(KText_e1414,"e1414");
	_LIT(KText_E1414,"E1414");
	_LIT(KText_1414,"1414");
	_LIT(KText_e1420,"e1420");
	_LIT(KText_E1420,"E1420");
	_LIT(KText_1420,"1420");
	_LIT(KText_e1422,"e1422");
	_LIT(KText_E1422,"E1422");
	_LIT(KText_1422,"1422");
	_LIT(KText_e1440,"e1440");
	_LIT(KText_E1440,"E1440");
	_LIT(KText_1440,"1440");
	_LIT(KText_e1442,"e1442");
	_LIT(KText_E1442,"E1442");
	_LIT(KText_1442,"1442");
	_LIT(KText_e1450,"e1450");
	_LIT(KText_E1450,"E1450");
	_LIT(KText_1450,"1450");
	_LIT(KText_e1451,"e1451");
	_LIT(KText_E1451,"E1451");
	_LIT(KText_1451,"1451");
	_LIT(KText_e1505,"e1505");
	_LIT(KText_E1505,"E1505");
	_LIT(KText_1505,"1505");
	_LIT(KText_e1518,"e1518");
	_LIT(KText_E1518,"E1518");
	_LIT(KText_1518,"1518");
	_LIT(KText_e1520,"e1520");
	_LIT(KText_E1520,"E1520");
	_LIT(KText_1520,"1520");


	
		// We need a deletable text container
		// variables to hold the data from the
		// resource files
	HBufC* textContainerTitle;
	HBufC* textContainerName;
	HBufC* textContainerName2;
	HBufC* textContainerFunction;
	HBufC* textContainerFoods;
	HBufC* textContainerFoods2;
	HBufC* textContainerDescription;
	HBufC* textContainerDescription2;
	HBufC* textContainerDescription3;
	HBufC* textContainerDescription4;



	if (aText == KText_e100 || aText == KText_E100 || aText == KText_100)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E100_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E100_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E100_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E100_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E100_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E100_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E100_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E100_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E100_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E100_DESCRIPTION4);
	}
	if (aText == KText_e101 || aText == KText_E101 || aText == KText_101)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E101_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E101_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E101_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E101_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E101_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E101_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E101_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E101_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E101_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E101_DESCRIPTION4);
	}
	if (aText == KText_e102 || aText == KText_E102 || aText == KText_102)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E102_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E102_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E102_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E102_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E102_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E102_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E102_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E102_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E102_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E102_DESCRIPTION4);
	}
	if (aText == KText_e104 || aText == KText_E104 || aText == KText_104)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E104_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E104_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E104_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E104_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E104_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E104_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E104_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E104_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E104_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E104_DESCRIPTION4);
	}
	if (aText == KText_e110 || aText == KText_E110 || aText == KText_110)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E110_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E110_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E110_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E110_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E110_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E110_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E110_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E110_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E110_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E110_DESCRIPTION4);
	}
	if (aText == KText_e120 || aText == KText_E120 || aText == KText_120)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E120_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E120_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E120_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E120_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E120_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E120_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E120_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E120_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E120_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E120_DESCRIPTION4);
	}
	if (aText == KText_e122 || aText == KText_E122 || aText == KText_122)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E122_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E122_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E122_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E122_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E122_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E122_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E122_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E122_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E122_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E122_DESCRIPTION4);
	}
	if (aText == KText_e123 || aText == KText_E123 || aText == KText_123)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E123_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E123_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E123_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E123_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E123_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E123_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E123_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E123_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E123_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E123_DESCRIPTION4);
	}
	if (aText == KText_e124 || aText == KText_E124 || aText == KText_124)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E124_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E124_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E124_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E124_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E124_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E124_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E124_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E124_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E124_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E124_DESCRIPTION4);
	}
	if (aText == KText_e127 || aText == KText_E127 || aText == KText_127)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E127_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E127_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E127_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E127_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E127_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E127_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E127_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E127_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E127_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E127_DESCRIPTION4);
	}
	if (aText == KText_e129 || aText == KText_E129 || aText == KText_129)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E129_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E129_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E129_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E129_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E129_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E129_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E129_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E129_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E129_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E129_DESCRIPTION4);
	}
	if (aText == KText_e131 || aText == KText_E131 || aText == KText_131)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E131_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E131_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E131_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E131_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E131_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E131_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E131_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E131_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E131_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E131_DESCRIPTION4);
	}
	if (aText == KText_e132 || aText == KText_E132 || aText == KText_132)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E132_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E132_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E132_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E132_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E132_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E132_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E132_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E132_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E132_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E132_DESCRIPTION4);
	}
	if (aText == KText_e133 || aText == KText_E133 || aText == KText_133)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E133_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E133_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E133_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E133_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E133_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E133_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E133_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E133_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E133_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E133_DESCRIPTION4);
	}
	if (aText == KText_e140 || aText == KText_E140 || aText == KText_140)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E140_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E140_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E140_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E140_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E140_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E140_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E140_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E140_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E140_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E140_DESCRIPTION4);
	}
	if (aText == KText_e141 || aText == KText_E141 || aText == KText_141)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E141_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E141_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E141_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E141_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E141_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E141_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E141_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E141_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E141_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E141_DESCRIPTION4);
	}
	if (aText == KText_e142 || aText == KText_E142 || aText == KText_142)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E142_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E142_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E142_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E142_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E142_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E142_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E142_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E142_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E142_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E142_DESCRIPTION4);
	}
	if (aText == KText_e150a || aText == KText_E150a || aText == KText_150a ||
		 aText == KText_e150 || aText == KText_E150 || aText == KText_150)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E150A_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E150A_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E150A_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E150A_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E150A_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E150A_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E150A_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E150A_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E150A_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E150A_DESCRIPTION4);
	}
	if (aText == KText_e150b || aText == KText_E150b || aText == KText_150b)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E150B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E150B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E150B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E150B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E150B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E150B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E150B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E150B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E150B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E150B_DESCRIPTION4);
	}
	if (aText == KText_e150c || aText == KText_E150c || aText == KText_150c)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E150C_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E150C_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E150C_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E150C_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E150C_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E150C_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E150C_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E150C_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E150C_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E150C_DESCRIPTION4);
	}
	if (aText == KText_e150d || aText == KText_E150d || aText == KText_150d)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E150D_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E150D_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E150D_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E150D_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E150D_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E150D_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E150D_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E150D_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E150D_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E150D_DESCRIPTION4);
	}
	if (aText == KText_e151 || aText == KText_E151 || aText == KText_151)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E151_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E151_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E151_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E151_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E151_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E151_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E151_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E151_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E151_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E151_DESCRIPTION4);
	}
	if (aText == KText_e153 || aText == KText_E153 || aText == KText_153)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E153_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E153_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E153_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E153_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E153_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E153_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E153_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E153_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E153_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E153_DESCRIPTION4);
	}
	if (aText == KText_e154 || aText == KText_E154 || aText == KText_154)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E154_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E154_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E154_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E154_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E154_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E154_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E154_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E154_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E154_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E154_DESCRIPTION4);
	}
	if (aText == KText_e155 || aText == KText_E155 || aText == KText_155)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E155_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E155_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E155_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E155_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E155_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E155_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E155_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E155_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E155_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E155_DESCRIPTION4);
	}
	if (aText == KText_e160a || aText == KText_E160a || aText == KText_160a ||
		 aText == KText_e160 || aText == KText_E160 || aText == KText_160)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E160A_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E160A_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E160A_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E160A_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E160A_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E160A_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E160A_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E160A_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E160A_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E160A_DESCRIPTION4);
	}
	if (aText == KText_e160b || aText == KText_E160b || aText == KText_160b)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E160B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E160B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E160B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E160B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E160B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E160B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E160B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E160B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E160B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E160B_DESCRIPTION4);
	}
	if (aText == KText_e160c || aText == KText_E160c || aText == KText_160c)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E160C_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E160C_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E160C_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E160C_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E160C_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E160C_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E160C_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E160C_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E160C_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E160C_DESCRIPTION4);
	}
	if (aText == KText_e160d || aText == KText_E160d || aText == KText_160d)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E160D_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E160D_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E160D_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E160D_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E160D_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E160D_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E160D_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E160D_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E160D_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E160D_DESCRIPTION4);
	}
	if (aText == KText_e160e || aText == KText_E160e || aText == KText_160e)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E160E_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E160E_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E160E_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E160E_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E160E_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E160E_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E160E_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E160E_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E160E_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E160E_DESCRIPTION4);
	}
	if (aText == KText_e160f || aText == KText_E160f || aText == KText_160f)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E160F_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E160F_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E160F_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E160F_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E160F_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E160F_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E160F_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E160F_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E160F_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E160F_DESCRIPTION4);
	}
	if (aText == KText_e161b || aText == KText_E161b || aText == KText_161b ||
		 aText == KText_e161 || aText == KText_E161 || aText == KText_161)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E161B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E161B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E161B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E161B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E161B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E161B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E161B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E161B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E161B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E161B_DESCRIPTION4);
	}
	if (aText == KText_e161g || aText == KText_E161g || aText == KText_161g)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E161G_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E161G_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E161G_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E161G_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E161G_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E161G_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E161G_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E161G_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E161G_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E161G_DESCRIPTION4);
	}
	if (aText == KText_e162 || aText == KText_E162 || aText == KText_162)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E162_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E162_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E162_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E162_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E162_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E162_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E162_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E162_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E162_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E162_DESCRIPTION4);
	}
	if (aText == KText_e163 || aText == KText_E163 || aText == KText_163)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E163_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E163_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E163_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E163_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E163_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E163_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E163_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E163_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E163_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E163_DESCRIPTION4);
	}
	if (aText == KText_e170 || aText == KText_E170 || aText == KText_170)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E170_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E170_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E170_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E170_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E170_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E170_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E170_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E170_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E170_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E170_DESCRIPTION4);
	}
	if (aText == KText_e171 || aText == KText_E171 || aText == KText_171)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E171_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E171_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E171_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E171_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E171_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E171_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E171_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E171_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E171_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E171_DESCRIPTION4);
	}
	if (aText == KText_e172 || aText == KText_E172 || aText == KText_172)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E172_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E172_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E172_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E172_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E172_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E172_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E172_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E172_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E172_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E172_DESCRIPTION4);
	}
	if (aText == KText_e173 || aText == KText_E173 || aText == KText_173)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E173_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E173_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E173_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E173_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E173_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E173_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E173_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E173_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E173_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E173_DESCRIPTION4);
	}
	if (aText == KText_e174 || aText == KText_E174 || aText == KText_174)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E174_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E174_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E174_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E174_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E174_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E174_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E174_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E174_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E174_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E174_DESCRIPTION4);
	}
	if (aText == KText_e175 || aText == KText_E175 || aText == KText_175)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E175_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E175_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E175_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E175_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E175_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E175_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E175_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E175_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E175_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E175_DESCRIPTION4);
	}
	if (aText == KText_e180 || aText == KText_E180 || aText == KText_180)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E180_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E180_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E180_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E180_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E180_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E180_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E180_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E180_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E180_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E180_DESCRIPTION4);
	}



	if (aText == KText_e200 || aText == KText_E200 || aText == KText_200)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E200_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E200_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E200_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E200_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E200_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E200_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E200_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E200_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E200_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E200_DESCRIPTION4);
	}
	if (aText == KText_e202 || aText == KText_E202 || aText == KText_202)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E202_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E202_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E202_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E202_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E202_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E202_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E202_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E202_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E202_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E202_DESCRIPTION4);
	}
	if (aText == KText_e203 || aText == KText_E203 || aText == KText_203)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E203_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E203_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E203_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E203_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E203_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E203_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E203_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E203_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E203_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E203_DESCRIPTION4);
	}
	if (aText == KText_e210 || aText == KText_E210 || aText == KText_210)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E210_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E210_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E210_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E210_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E210_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E210_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E210_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E210_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E210_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E210_DESCRIPTION4);
	}
	if (aText == KText_e211 || aText == KText_E211 || aText == KText_211)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E211_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E211_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E211_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E211_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E211_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E211_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E211_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E211_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E211_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E211_DESCRIPTION4);
	}
	if (aText == KText_e212 || aText == KText_E212 || aText == KText_212)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E212_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E212_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E212_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E212_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E212_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E212_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E212_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E212_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E212_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E212_DESCRIPTION4);
	}
	if (aText == KText_e213 || aText == KText_E213 || aText == KText_213)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E213_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E213_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E213_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E213_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E213_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E213_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E213_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E213_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E213_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E213_DESCRIPTION4);
	}
	if (aText == KText_e214 || aText == KText_E214 || aText == KText_214)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E214_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E214_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E214_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E214_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E214_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E214_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E214_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E214_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E214_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E214_DESCRIPTION4);
	}
	if (aText == KText_e215 || aText == KText_E215 || aText == KText_215)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E215_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E215_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E215_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E215_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E215_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E215_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E215_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E215_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E215_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E215_DESCRIPTION4);
	}
	if (aText == KText_e216 || aText == KText_E216 || aText == KText_216)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E216_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E216_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E216_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E216_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E216_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E216_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E216_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E216_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E216_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E216_DESCRIPTION4);
	}
	if (aText == KText_e217 || aText == KText_E217 || aText == KText_217)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E217_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E217_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E217_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E217_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E217_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E217_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E217_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E217_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E217_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E217_DESCRIPTION4);
	}
	if (aText == KText_e218 || aText == KText_E218 || aText == KText_218)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E218_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E218_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E218_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E218_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E218_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E218_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E218_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E218_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E218_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E218_DESCRIPTION4);
	}
	if (aText == KText_e219 || aText == KText_E219 || aText == KText_219)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E219_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E219_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E219_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E219_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E219_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E219_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E219_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E219_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E219_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E219_DESCRIPTION4);
	}
	if (aText == KText_e220 || aText == KText_E220 || aText == KText_220)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E220_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E220_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E220_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E220_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E220_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E220_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E220_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E220_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E220_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E220_DESCRIPTION4);
	}
	if (aText == KText_e221 || aText == KText_E221 || aText == KText_221)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E221_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E221_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E221_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E221_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E221_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E221_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E221_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E221_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E221_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E221_DESCRIPTION4);
	}
	if (aText == KText_e222 || aText == KText_E222 || aText == KText_222)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E222_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E222_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E222_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E222_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E222_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E222_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E222_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E222_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E222_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E222_DESCRIPTION4);
	}
	if (aText == KText_e223 || aText == KText_E223 || aText == KText_223)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E223_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E223_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E223_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E223_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E223_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E223_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E223_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E223_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E223_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E223_DESCRIPTION4);
	}
	if (aText == KText_e224 || aText == KText_E224 || aText == KText_224)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E224_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E224_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E224_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E224_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E224_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E224_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E224_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E224_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E224_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E224_DESCRIPTION4);
	}
	if (aText == KText_e226 || aText == KText_E226 || aText == KText_226)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E226_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E226_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E226_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E226_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E226_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E226_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E226_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E226_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E226_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E226_DESCRIPTION4);
	}
	if (aText == KText_e227 || aText == KText_E227 || aText == KText_227)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E227_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E227_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E227_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E227_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E227_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E227_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E227_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E227_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E227_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E227_DESCRIPTION4);
	}
	if (aText == KText_e228 || aText == KText_E228 || aText == KText_228)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E228_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E228_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E228_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E228_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E228_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E228_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E228_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E228_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E228_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E228_DESCRIPTION4);
	}
	if (aText == KText_e230 || aText == KText_E230 || aText == KText_230)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E230_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E230_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E230_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E230_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E230_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E230_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E230_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E230_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E230_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E230_DESCRIPTION4);
	}
	if (aText == KText_e231 || aText == KText_E231 || aText == KText_231)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E231_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E231_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E231_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E231_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E231_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E231_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E231_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E231_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E231_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E231_DESCRIPTION4);
	}
	if (aText == KText_e232 || aText == KText_E232 || aText == KText_232)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E232_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E232_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E232_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E232_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E232_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E232_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E232_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E232_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E232_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E232_DESCRIPTION4);
	}
	if (aText == KText_e234 || aText == KText_E234 || aText == KText_234)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E234_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E234_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E234_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E234_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E234_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E234_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E234_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E234_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E234_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E234_DESCRIPTION4);
	}
	if (aText == KText_e235 || aText == KText_E235 || aText == KText_235)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E235_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E235_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E235_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E235_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E235_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E235_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E235_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E235_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E235_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E235_DESCRIPTION4);
	}
	if (aText == KText_e239 || aText == KText_E239 || aText == KText_239)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E239_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E239_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E239_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E239_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E239_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E239_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E239_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E239_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E239_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E239_DESCRIPTION4);
	}
	if (aText == KText_e242 || aText == KText_E242 || aText == KText_242)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E242_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E242_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E242_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E242_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E242_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E242_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E242_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E242_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E242_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E242_DESCRIPTION4);
	}
	if (aText == KText_e249 || aText == KText_E249 || aText == KText_249)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E249_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E249_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E249_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E249_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E249_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E249_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E249_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E249_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E249_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E249_DESCRIPTION4);
	}
	if (aText == KText_e250 || aText == KText_E250 || aText == KText_250)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E250_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E250_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E250_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E250_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E250_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E250_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E250_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E250_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E250_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E250_DESCRIPTION4);
	}
	if (aText == KText_e251 || aText == KText_E251 || aText == KText_251)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E251_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E251_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E251_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E251_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E251_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E251_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E251_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E251_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E251_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E251_DESCRIPTION4);
	}
	if (aText == KText_e252 || aText == KText_E252 || aText == KText_252)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E252_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E252_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E252_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E252_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E252_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E252_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E252_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E252_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E252_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E252_DESCRIPTION4);
	}
	if (aText == KText_e260 || aText == KText_E260 || aText == KText_260)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E260_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E260_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E260_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E260_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E260_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E260_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E260_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E260_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E260_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E260_DESCRIPTION4);
	}
	if (aText == KText_e261 || aText == KText_E261 || aText == KText_261)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E261_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E261_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E261_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E261_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E261_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E261_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E261_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E261_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E261_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E261_DESCRIPTION4);
	}
	if (aText == KText_e262 || aText == KText_E262 || aText == KText_262)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E262_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E262_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E262_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E262_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E262_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E262_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E262_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E262_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E262_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E262_DESCRIPTION4);
	}
	if (aText == KText_e263 || aText == KText_E263 || aText == KText_263)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E263_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E263_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E263_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E263_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E263_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E263_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E263_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E263_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E263_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E263_DESCRIPTION4);
	}
	if (aText == KText_e270 || aText == KText_E270 || aText == KText_270)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E270_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E270_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E270_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E270_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E270_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E270_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E270_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E270_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E270_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E270_DESCRIPTION4);
	}
	if (aText == KText_e280 || aText == KText_E280 || aText == KText_280)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E280_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E280_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E280_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E280_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E280_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E280_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E280_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E280_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E280_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E280_DESCRIPTION4);
	}
	if (aText == KText_e281 || aText == KText_E281 || aText == KText_281)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E281_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E281_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E281_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E281_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E281_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E281_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E281_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E281_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E281_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E281_DESCRIPTION4);
	}
	if (aText == KText_e282 || aText == KText_E282 || aText == KText_282)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E282_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E282_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E282_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E282_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E282_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E282_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E282_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E282_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E282_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E282_DESCRIPTION4);
	}
	if (aText == KText_e283 || aText == KText_E283 || aText == KText_283)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E283_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E283_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E283_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E283_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E283_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E283_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E283_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E283_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E283_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E283_DESCRIPTION4);
	}
	if (aText == KText_e284 || aText == KText_E284 || aText == KText_284)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E284_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E284_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E284_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E284_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E284_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E284_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E284_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E284_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E284_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E284_DESCRIPTION4);
	}
	if (aText == KText_e285 || aText == KText_E285 || aText == KText_285)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E285_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E285_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E285_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E285_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E285_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E285_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E285_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E285_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E285_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E285_DESCRIPTION4);
	}
	if (aText == KText_e290 || aText == KText_E290 || aText == KText_290)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E290_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E290_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E290_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E290_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E290_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E290_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E290_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E290_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E290_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E290_DESCRIPTION4);
	}
	if (aText == KText_e296 || aText == KText_E296 || aText == KText_296)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E296_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E296_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E296_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E296_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E296_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E296_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E296_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E296_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E296_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E296_DESCRIPTION4);
	}
	if (aText == KText_e297 || aText == KText_E297 || aText == KText_297)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E297_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E297_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E297_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E297_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E297_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E297_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E297_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E297_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E297_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E297_DESCRIPTION4);
	}




	if (aText == KText_e300 || aText == KText_E300 || aText == KText_300)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E300_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E300_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E300_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E300_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E300_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E300_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E300_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E300_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E300_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E300_DESCRIPTION4);
	}
	if (aText == KText_e301 || aText == KText_E301 || aText == KText_301)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E301_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E301_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E301_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E301_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E301_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E301_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E301_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E301_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E301_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E301_DESCRIPTION4);
	}
	if (aText == KText_e302 || aText == KText_E302 || aText == KText_302)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E302_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E302_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E302_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E302_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E302_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E302_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E302_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E302_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E302_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E302_DESCRIPTION4);
	}
	if (aText == KText_e304 || aText == KText_E304 || aText == KText_304)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E304_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E304_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E304_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E304_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E304_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E304_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E304_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E304_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E304_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E304_DESCRIPTION4);
	}
	if (aText == KText_e306 || aText == KText_E306 || aText == KText_306)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E306_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E306_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E306_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E306_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E306_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E306_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E306_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E306_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E306_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E306_DESCRIPTION4);
	}
	if (aText == KText_e307 || aText == KText_E307 || aText == KText_307)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E307_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E307_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E307_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E307_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E307_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E307_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E307_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E307_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E307_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E307_DESCRIPTION4);
	}
	if (aText == KText_e308 || aText == KText_E308 || aText == KText_308)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E308_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E308_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E308_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E308_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E308_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E308_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E308_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E308_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E308_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E308_DESCRIPTION4);
	}
	if (aText == KText_e309 || aText == KText_E309 || aText == KText_309)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E309_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E309_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E309_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E309_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E309_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E309_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E309_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E309_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E309_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E309_DESCRIPTION4);
	}
	if (aText == KText_e310 || aText == KText_E310 || aText == KText_310)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E310_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E310_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E310_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E310_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E310_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E310_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E310_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E310_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E310_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E310_DESCRIPTION4);
	}
	if (aText == KText_e311 || aText == KText_E311 || aText == KText_311)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E311_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E311_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E311_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E311_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E311_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E311_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E311_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E311_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E311_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E311_DESCRIPTION4);
	}
	if (aText == KText_e312 || aText == KText_E312 || aText == KText_312)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E312_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E312_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E312_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E312_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E312_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E312_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E312_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E312_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E312_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E312_DESCRIPTION4);
	}
	if (aText == KText_e315 || aText == KText_E315 || aText == KText_315)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E315_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E315_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E315_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E315_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E315_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E315_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E315_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E315_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E315_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E315_DESCRIPTION4);
	}
	if (aText == KText_e316 || aText == KText_E316 || aText == KText_316)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E316_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E316_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E316_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E316_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E316_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E316_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E316_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E316_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E316_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E316_DESCRIPTION4);
	}
	if (aText == KText_e320 || aText == KText_E320 || aText == KText_320)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E320_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E320_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E320_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E320_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E320_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E320_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E320_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E320_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E320_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E320_DESCRIPTION4);
	}
	if (aText == KText_e321 || aText == KText_E321 || aText == KText_321)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E321_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E321_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E321_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E321_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E321_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E321_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E321_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E321_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E321_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E321_DESCRIPTION4);
	}
	if (aText == KText_e322 || aText == KText_E322 || aText == KText_322)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E322_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E322_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E322_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E322_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E322_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E322_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E322_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E322_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E322_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E322_DESCRIPTION4);
	}
	if (aText == KText_e325 || aText == KText_E325 || aText == KText_325)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E325_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E325_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E325_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E325_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E325_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E325_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E325_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E325_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E325_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E325_DESCRIPTION4);
	}
	if (aText == KText_e326 || aText == KText_E326 || aText == KText_326)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E326_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E326_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E326_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E326_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E326_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E326_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E326_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E326_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E326_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E326_DESCRIPTION4);
	}
	if (aText == KText_e327 || aText == KText_E327 || aText == KText_327)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E327_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E327_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E327_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E327_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E327_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E327_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E327_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E327_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E327_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E327_DESCRIPTION4);
	}
	if (aText == KText_e330 || aText == KText_E330 || aText == KText_330)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E330_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E330_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E330_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E330_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E330_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E330_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E330_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E330_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E330_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E330_DESCRIPTION4);
	}
	if (aText == KText_e331 || aText == KText_E331 || aText == KText_331)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E331_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E331_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E331_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E331_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E331_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E331_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E331_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E331_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E331_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E331_DESCRIPTION4);
	}
	if (aText == KText_e332 || aText == KText_E332 || aText == KText_332)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E332_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E332_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E332_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E332_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E332_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E332_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E332_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E332_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E332_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E332_DESCRIPTION4);
	}
	if (aText == KText_e333 || aText == KText_E333 || aText == KText_333)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E333_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E333_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E333_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E333_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E333_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E333_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E333_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E333_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E333_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E333_DESCRIPTION4);
	}
	if (aText == KText_e334 || aText == KText_E334 || aText == KText_334)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E334_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E334_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E334_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E334_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E334_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E334_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E334_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E334_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E334_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E334_DESCRIPTION4);
	}
	if (aText == KText_e335 || aText == KText_E335 || aText == KText_335)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E335_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E335_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E335_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E335_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E335_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E335_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E335_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E335_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E335_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E335_DESCRIPTION4);
	}
	if (aText == KText_e336 || aText == KText_E336 || aText == KText_336)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E336_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E336_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E336_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E336_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E336_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E336_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E336_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E336_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E336_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E336_DESCRIPTION4);
	}
	if (aText == KText_e337 || aText == KText_E337 || aText == KText_337)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E337_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E337_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E337_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E337_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E337_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E337_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E337_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E337_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E337_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E337_DESCRIPTION4);
	}
	if (aText == KText_e338 || aText == KText_E338 || aText == KText_338)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E338_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E338_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E338_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E338_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E338_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E338_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E338_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E338_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E338_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E338_DESCRIPTION4);
	}
	if (aText == KText_e339 || aText == KText_E339 || aText == KText_339)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E339_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E339_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E339_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E339_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E339_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E339_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E339_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E339_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E339_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E339_DESCRIPTION4);
	}
	if (aText == KText_e340 || aText == KText_E340 || aText == KText_340)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E340_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E340_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E340_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E340_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E340_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E340_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E340_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E340_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E340_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E340_DESCRIPTION4);
	}
	if (aText == KText_e341 || aText == KText_E341 || aText == KText_341)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E341_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E341_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E341_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E341_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E341_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E341_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E341_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E341_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E341_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E341_DESCRIPTION4);
	}
	if (aText == KText_e343 || aText == KText_E343 || aText == KText_343)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E343_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E343_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E343_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E343_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E343_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E343_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E343_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E343_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E343_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E343_DESCRIPTION4);
	}
	if (aText == KText_e350 || aText == KText_E350 || aText == KText_350)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E350_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E350_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E350_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E350_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E350_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E350_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E350_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E350_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E350_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E350_DESCRIPTION4);
	}
	if (aText == KText_e351 || aText == KText_E351 || aText == KText_351)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E351_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E351_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E351_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E351_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E351_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E351_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E351_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E351_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E351_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E351_DESCRIPTION4);
	}
	if (aText == KText_e352 || aText == KText_E352 || aText == KText_352)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E352_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E352_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E352_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E352_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E352_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E352_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E352_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E352_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E352_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E352_DESCRIPTION4);
	}
	if (aText == KText_e353 || aText == KText_E353 || aText == KText_353)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E353_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E353_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E353_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E353_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E353_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E353_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E353_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E353_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E353_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E353_DESCRIPTION4);
	}
	if (aText == KText_e354 || aText == KText_E354 || aText == KText_354)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E354_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E354_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E354_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E354_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E354_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E354_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E354_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E354_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E354_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E354_DESCRIPTION4);
	}
	if (aText == KText_e355 || aText == KText_E355 || aText == KText_355)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E355_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E355_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E355_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E355_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E355_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E355_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E355_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E355_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E355_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E355_DESCRIPTION4);
	}
	if (aText == KText_e356 || aText == KText_E356 || aText == KText_356)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E356_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E356_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E356_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E356_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E356_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E356_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E356_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E356_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E356_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E356_DESCRIPTION4);
	}
	if (aText == KText_e357 || aText == KText_E357 || aText == KText_357)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E357_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E357_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E357_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E357_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E357_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E357_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E357_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E357_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E357_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E357_DESCRIPTION4);
	}
	if (aText == KText_e363 || aText == KText_E363 || aText == KText_363)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E363_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E363_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E363_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E363_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E363_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E363_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E363_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E363_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E363_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E363_DESCRIPTION4);
	}
	if (aText == KText_e380 || aText == KText_E380 || aText == KText_380)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E380_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E380_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E380_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E380_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E380_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E380_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E380_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E380_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E380_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E380_DESCRIPTION4);
	}
	if (aText == KText_e385 || aText == KText_E385 || aText == KText_385)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E385_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E385_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E385_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E385_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E385_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E385_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E385_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E385_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E385_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E385_DESCRIPTION4);
	}



	if (aText == KText_e400 || aText == KText_E400 || aText == KText_400)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E400_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E400_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E400_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E400_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E400_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E400_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E400_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E400_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E400_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E400_DESCRIPTION4);
	}
	if (aText == KText_e401 || aText == KText_E401 || aText == KText_401)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E401_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E401_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E401_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E401_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E401_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E401_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E401_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E401_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E401_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E401_DESCRIPTION4);
	}
	if (aText == KText_e402 || aText == KText_E402 || aText == KText_402)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E402_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E402_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E402_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E402_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E402_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E402_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E402_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E402_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E402_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E402_DESCRIPTION4);
	}
	if (aText == KText_e403 || aText == KText_E403 || aText == KText_403)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E403_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E403_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E403_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E403_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E403_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E403_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E403_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E403_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E403_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E403_DESCRIPTION4);
	}
	if (aText == KText_e404 || aText == KText_E404 || aText == KText_404)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E404_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E404_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E404_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E404_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E404_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E404_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E404_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E404_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E404_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E404_DESCRIPTION4);
	}
	if (aText == KText_e405 || aText == KText_E405 || aText == KText_405)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E405_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E405_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E405_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E405_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E405_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E405_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E405_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E405_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E405_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E405_DESCRIPTION4);
	}
	if (aText == KText_e406 || aText == KText_E406 || aText == KText_406)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E406_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E406_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E406_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E406_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E406_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E406_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E406_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E406_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E406_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E406_DESCRIPTION4);
	}
	if (aText == KText_e407 || aText == KText_E407 || aText == KText_407)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E407_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E407_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E407_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E407_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E407_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E407_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E407_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E407_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E407_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E407_DESCRIPTION4);
	}
	if (aText == KText_e407a || aText == KText_E407a || aText == KText_407a)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E407A_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E407A_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E407A_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E407A_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E407A_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E407A_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E407A_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E407A_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E407A_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E407A_DESCRIPTION4);
	}
	if (aText == KText_e410 || aText == KText_E410 || aText == KText_410)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E410_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E410_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E410_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E410_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E410_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E410_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E410_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E410_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E410_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E410_DESCRIPTION4);
	}
	if (aText == KText_e412 || aText == KText_E412 || aText == KText_412)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E412_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E412_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E412_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E412_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E412_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E412_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E412_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E412_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E412_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E412_DESCRIPTION4);
	}
	if (aText == KText_e413 || aText == KText_E413 || aText == KText_413)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E413_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E413_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E413_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E413_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E413_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E413_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E413_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E413_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E413_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E413_DESCRIPTION4);
	}
	if (aText == KText_e414 || aText == KText_E414 || aText == KText_414)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E414_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E414_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E414_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E414_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E414_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E414_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E414_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E414_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E414_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E414_DESCRIPTION4);
	}
	if (aText == KText_e415 || aText == KText_E415 || aText == KText_415)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E415_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E415_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E415_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E415_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E415_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E415_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E415_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E415_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E415_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E415_DESCRIPTION4);
	}
	if (aText == KText_e416 || aText == KText_E416 || aText == KText_416)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E416_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E416_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E416_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E416_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E416_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E416_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E416_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E416_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E416_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E416_DESCRIPTION4);
	}
	if (aText == KText_e417 || aText == KText_E417 || aText == KText_417)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E417_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E417_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E417_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E417_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E417_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E417_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E417_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E417_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E417_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E417_DESCRIPTION4);
	}
	if (aText == KText_e418 || aText == KText_E418 || aText == KText_418)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E418_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E418_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E418_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E418_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E418_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E418_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E418_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E418_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E418_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E418_DESCRIPTION4);
	}
	if (aText == KText_e420 || aText == KText_E420 || aText == KText_420)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E420_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E420_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E420_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E420_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E420_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E420_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E420_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E420_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E420_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E420_DESCRIPTION4);
	}
	if (aText == KText_e421 || aText == KText_E421 || aText == KText_421)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E421_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E421_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E421_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E421_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E421_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E421_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E421_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E421_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E421_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E421_DESCRIPTION4);
	}
	if (aText == KText_e422 || aText == KText_E422 || aText == KText_422)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E422_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E422_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E422_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E422_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E422_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E422_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E422_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E422_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E422_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E422_DESCRIPTION4);
	}
	if (aText == KText_e431 || aText == KText_E431 || aText == KText_431)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E431_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E431_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E431_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E431_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E431_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E431_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E431_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E431_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E431_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E431_DESCRIPTION4);
	}
	if (aText == KText_e432 || aText == KText_E432 || aText == KText_432)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E432_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E432_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E432_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E432_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E432_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E432_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E432_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E432_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E432_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E432_DESCRIPTION4);
	}
	if (aText == KText_e433 || aText == KText_E433 || aText == KText_433)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E433_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E433_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E433_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E433_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E433_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E433_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E433_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E433_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E433_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E433_DESCRIPTION4);
	}
	if (aText == KText_e434 || aText == KText_E434 || aText == KText_434)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E434_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E434_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E434_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E434_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E434_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E434_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E434_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E434_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E434_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E434_DESCRIPTION4);
	}
	if (aText == KText_e435 || aText == KText_E435 || aText == KText_435)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E435_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E435_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E435_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E435_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E435_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E435_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E435_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E435_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E435_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E435_DESCRIPTION4);
	}
	if (aText == KText_e436 || aText == KText_E436 || aText == KText_436)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E436_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E436_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E436_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E436_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E436_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E436_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E436_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E436_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E436_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E436_DESCRIPTION4);
	}
	if (aText == KText_e440 || aText == KText_E440 || aText == KText_440)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E440_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E440_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E440_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E440_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E440_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E440_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E440_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E440_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E440_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E440_DESCRIPTION4);
	}
	if (aText == KText_e442 || aText == KText_E442 || aText == KText_442)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E442_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E442_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E442_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E442_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E442_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E442_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E442_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E442_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E442_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E442_DESCRIPTION4);
	}
	if (aText == KText_e444 || aText == KText_E444 || aText == KText_444)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E444_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E444_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E444_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E444_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E444_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E444_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E444_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E444_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E444_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E444_DESCRIPTION4);
	}
	if (aText == KText_e450 || aText == KText_E450 || aText == KText_450)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E450_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E450_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E450_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E450_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E450_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E450_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E450_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E450_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E450_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E450_DESCRIPTION4);
	}
	if (aText == KText_e451 || aText == KText_E451 || aText == KText_451)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E451_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E451_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E451_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E451_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E451_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E451_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E451_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E451_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E451_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E451_DESCRIPTION4);
	}
	if (aText == KText_e452 || aText == KText_E452 || aText == KText_452)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E452_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E452_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E452_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E452_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E452_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E452_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E452_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E452_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E452_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E452_DESCRIPTION4);
	}
	if (aText == KText_e459 || aText == KText_E459 || aText == KText_459)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E459_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E459_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E459_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E459_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E459_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E459_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E459_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E459_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E459_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E459_DESCRIPTION4);
	}
	if (aText == KText_e460 || aText == KText_E460 || aText == KText_460)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E460_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E460_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E460_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E460_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E460_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E460_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E460_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E460_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E460_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E460_DESCRIPTION4);
	}
	if (aText == KText_e461 || aText == KText_E461 || aText == KText_461)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E461_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E461_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E461_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E461_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E461_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E461_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E461_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E461_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E461_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E461_DESCRIPTION4);
	}


	if (aText == KText_e463 || aText == KText_E463 || aText == KText_463)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E463_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E463_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E463_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E463_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E463_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E463_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E463_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E463_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E463_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E463_DESCRIPTION4);
	}
	if (aText == KText_e464 || aText == KText_E464 || aText == KText_464)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E464_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E464_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E464_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E464_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E464_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E464_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E464_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E464_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E464_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E464_DESCRIPTION4);
	}
	if (aText == KText_e465 || aText == KText_E465 || aText == KText_465)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E465_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E465_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E465_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E465_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E465_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E465_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E465_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E465_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E465_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E465_DESCRIPTION4);
	}
	if (aText == KText_e466 || aText == KText_E466 || aText == KText_466)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E466_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E466_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E466_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E466_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E466_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E466_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E466_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E466_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E466_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E466_DESCRIPTION4);
	}
	if (aText == KText_e468 || aText == KText_E468 || aText == KText_468)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E468_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E468_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E468_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E468_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E468_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E468_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E468_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E468_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E468_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E468_DESCRIPTION4);
	}
	if (aText == KText_e469 || aText == KText_E469 || aText == KText_469)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E469_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E469_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E469_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E469_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E469_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E469_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E469_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E469_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E469_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E469_DESCRIPTION4);
	}
	if (aText == KText_e470a || aText == KText_E470a || aText == KText_470a ||
		 aText == KText_e470 || aText == KText_E470 || aText == KText_470)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E470A_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E470A_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E470A_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E470A_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E470A_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E470A_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E470A_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E470A_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E470A_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E470A_DESCRIPTION4);
	}
	if (aText == KText_e470b || aText == KText_E470b || aText == KText_470b)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E470B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E470B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E470B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E470B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E470B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E470B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E470B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E470B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E470B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E470B_DESCRIPTION4);
	}
	if (aText == KText_e471 || aText == KText_E471 || aText == KText_471)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E471_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E471_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E471_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E471_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E471_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E471_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E471_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E471_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E471_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E471_DESCRIPTION4);
	}
	if (aText == KText_e472 || aText == KText_E472 || aText == KText_472)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E472_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E472_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E472_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E472_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E472_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E472_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E472_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E472_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E472_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E472_DESCRIPTION4);
	}
	if (aText == KText_e473 || aText == KText_E473 || aText == KText_473)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E473_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E473_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E473_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E473_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E473_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E473_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E473_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E473_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E473_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E473_DESCRIPTION4);
	}
	if (aText == KText_e474 || aText == KText_E474 || aText == KText_474)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E474_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E474_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E474_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E474_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E474_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E474_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E474_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E474_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E474_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E474_DESCRIPTION4);
	}
	if (aText == KText_e475 || aText == KText_E475 || aText == KText_475)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E475_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E475_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E475_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E475_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E475_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E475_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E475_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E475_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E475_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E475_DESCRIPTION4);
	}
	if (aText == KText_e476 || aText == KText_E476 || aText == KText_476)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E476_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E476_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E476_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E476_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E476_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E476_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E476_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E476_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E476_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E476_DESCRIPTION4);
	}
	if (aText == KText_e477 || aText == KText_E477 || aText == KText_477)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E477_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E477_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E477_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E477_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E477_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E477_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E477_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E477_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E477_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E477_DESCRIPTION4);
	}
	if (aText == KText_e479b || aText == KText_E479b || aText == KText_479b ||
		 aText == KText_e479 || aText == KText_E479 || aText == KText_479)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E479B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E479B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E479B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E479B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E479B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E479B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E479B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E479B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E479B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E479B_DESCRIPTION4);
	}
	if (aText == KText_e481 || aText == KText_E481 || aText == KText_481)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E481_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E481_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E481_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E481_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E481_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E481_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E481_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E481_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E481_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E481_DESCRIPTION4);
	}
	if (aText == KText_e482 || aText == KText_E482 || aText == KText_482)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E482_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E482_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E482_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E482_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E482_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E482_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E482_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E482_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E482_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E482_DESCRIPTION4);
	}
	if (aText == KText_e483 || aText == KText_E483 || aText == KText_483)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E483_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E483_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E483_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E483_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E483_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E483_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E483_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E483_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E483_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E483_DESCRIPTION4);
	}
	if (aText == KText_e491 || aText == KText_E491 || aText == KText_491)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E491_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E491_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E491_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E491_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E491_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E491_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E491_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E491_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E491_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E491_DESCRIPTION4);
	}
	if (aText == KText_e492 || aText == KText_E492 || aText == KText_492)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E492_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E492_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E492_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E492_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E492_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E492_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E492_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E492_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E492_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E492_DESCRIPTION4);
	}
	if (aText == KText_e493 || aText == KText_E493 || aText == KText_493)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E493_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E493_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E493_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E493_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E493_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E493_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E493_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E493_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E493_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E493_DESCRIPTION4);
	}
	if (aText == KText_e494 || aText == KText_E494 || aText == KText_494)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E494_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E494_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E494_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E494_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E494_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E494_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E494_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E494_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E494_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E494_DESCRIPTION4);
	}
	if (aText == KText_e495 || aText == KText_E495 || aText == KText_495)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E495_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E495_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E495_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E495_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E495_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E495_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E495_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E495_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E495_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E495_DESCRIPTION4);
	}



	if (aText == KText_e500 || aText == KText_E500 || aText == KText_500)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E500_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E500_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E500_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E500_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E500_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E500_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E500_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E500_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E500_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E500_DESCRIPTION4);
	}
	if (aText == KText_e501 || aText == KText_E501 || aText == KText_501)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E501_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E501_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E501_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E501_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E501_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E501_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E501_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E501_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E501_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E501_DESCRIPTION4);
	}
	if (aText == KText_e503 || aText == KText_E503 || aText == KText_503)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E503_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E503_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E503_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E503_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E503_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E503_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E503_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E503_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E503_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E503_DESCRIPTION4);
	}
	if (aText == KText_e504 || aText == KText_E504 || aText == KText_504)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E504_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E504_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E504_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E504_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E504_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E504_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E504_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E504_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E504_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E504_DESCRIPTION4);
	}
	if (aText == KText_e507 || aText == KText_E507 || aText == KText_507)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E507_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E507_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E507_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E507_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E507_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E507_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E507_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E507_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E507_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E507_DESCRIPTION4);
	}
	if (aText == KText_e508 || aText == KText_E508 || aText == KText_508)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E508_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E508_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E508_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E508_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E508_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E508_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E508_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E508_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E508_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E508_DESCRIPTION4);
	}
	if (aText == KText_e509 || aText == KText_E509 || aText == KText_509)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E509_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E509_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E509_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E509_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E509_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E509_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E509_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E509_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E509_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E509_DESCRIPTION4);
	}
	if (aText == KText_e511 || aText == KText_E511 || aText == KText_511)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E511_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E511_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E511_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E511_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E511_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E511_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E511_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E511_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E511_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E511_DESCRIPTION4);
	}
	if (aText == KText_e512 || aText == KText_E512 || aText == KText_512)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E512_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E512_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E512_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E512_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E512_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E512_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E512_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E512_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E512_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E512_DESCRIPTION4);
	}
	if (aText == KText_e513 || aText == KText_E513 || aText == KText_513)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E513_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E513_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E513_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E513_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E513_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E513_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E513_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E513_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E513_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E513_DESCRIPTION4);
	}
	if (aText == KText_e514 || aText == KText_E514 || aText == KText_514)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E514_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E514_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E514_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E514_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E514_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E514_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E514_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E514_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E514_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E514_DESCRIPTION4);
	}
	if (aText == KText_e515 || aText == KText_E515 || aText == KText_515)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E515_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E515_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E515_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E515_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E515_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E515_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E515_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E515_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E515_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E515_DESCRIPTION4);
	}
	if (aText == KText_e516 || aText == KText_E516 || aText == KText_516)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E516_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E516_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E516_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E516_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E516_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E516_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E516_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E516_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E516_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E516_DESCRIPTION4);
	}
	if (aText == KText_e517 || aText == KText_E517 || aText == KText_517)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E517_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E517_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E517_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E517_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E517_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E517_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E517_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E517_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E517_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E517_DESCRIPTION4);
	}
	if (aText == KText_e520 || aText == KText_E520 || aText == KText_520)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E520_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E520_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E520_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E520_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E520_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E520_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E520_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E520_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E520_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E520_DESCRIPTION4);
	}
	if (aText == KText_e521 || aText == KText_E521 || aText == KText_521)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E521_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E521_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E521_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E521_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E521_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E521_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E521_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E521_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E521_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E521_DESCRIPTION4);
	}
	if (aText == KText_e522 || aText == KText_E522 || aText == KText_522)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E522_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E522_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E522_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E522_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E522_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E522_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E522_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E522_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E522_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E522_DESCRIPTION4);
	}
	if (aText == KText_e523 || aText == KText_E523 || aText == KText_523)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E523_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E523_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E523_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E523_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E523_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E523_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E523_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E523_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E523_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E523_DESCRIPTION4);
	}
	if (aText == KText_e524 || aText == KText_E524 || aText == KText_524)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E524_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E524_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E524_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E524_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E524_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E524_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E524_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E524_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E524_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E524_DESCRIPTION4);
	}
	if (aText == KText_e525 || aText == KText_E525 || aText == KText_525)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E525_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E525_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E525_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E525_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E525_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E525_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E525_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E525_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E525_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E525_DESCRIPTION4);
	}
	if (aText == KText_e526 || aText == KText_E526 || aText == KText_526)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E526_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E526_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E526_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E526_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E526_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E526_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E526_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E526_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E526_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E526_DESCRIPTION4);
	}
	if (aText == KText_e527 || aText == KText_E527 || aText == KText_527)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E527_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E527_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E527_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E527_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E527_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E527_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E527_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E527_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E527_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E527_DESCRIPTION4);
	}
	if (aText == KText_e528 || aText == KText_E528 || aText == KText_528)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E528_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E528_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E528_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E528_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E528_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E528_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E528_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E528_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E528_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E528_DESCRIPTION4);
	}
	if (aText == KText_e529 || aText == KText_E529 || aText == KText_529)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E529_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E529_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E529_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E529_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E529_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E529_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E529_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E529_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E529_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E529_DESCRIPTION4);
	}
	if (aText == KText_e530 || aText == KText_E530 || aText == KText_530)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E530_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E530_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E530_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E530_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E530_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E530_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E530_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E530_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E530_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E530_DESCRIPTION4);
	}
	if (aText == KText_e535 || aText == KText_E535 || aText == KText_535)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E535_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E535_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E535_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E535_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E535_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E535_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E535_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E535_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E535_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E535_DESCRIPTION4);
	}
	if (aText == KText_e536 || aText == KText_E536 || aText == KText_536)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E536_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E536_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E536_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E536_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E536_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E536_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E536_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E536_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E536_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E536_DESCRIPTION4);
	}
	if (aText == KText_e538 || aText == KText_E538 || aText == KText_538)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E538_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E538_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E538_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E538_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E538_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E538_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E538_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E538_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E538_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E538_DESCRIPTION4);
	}
	if (aText == KText_e541 || aText == KText_E541 || aText == KText_541)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E541_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E541_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E541_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E541_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E541_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E541_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E541_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E541_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E541_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E541_DESCRIPTION4);
	}
	if (aText == KText_e551 || aText == KText_E551 || aText == KText_551)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E551_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E551_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E551_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E551_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E551_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E551_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E551_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E551_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E551_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E551_DESCRIPTION4);
	}
	if (aText == KText_e552 || aText == KText_E552 || aText == KText_552)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E552_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E552_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E552_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E552_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E552_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E552_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E552_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E552_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E552_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E552_DESCRIPTION4);
	}
	if (aText == KText_e553a || aText == KText_E553a || aText == KText_553a ||
		 aText == KText_e553 || aText == KText_E553 || aText == KText_553)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E553A_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E553A_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E553A_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E553A_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E553A_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E553A_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E553A_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E553A_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E553A_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E553A_DESCRIPTION4);
	}
	if (aText == KText_e553b || aText == KText_E553b || aText == KText_553b)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E553B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E553B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E553B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E553B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E553B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E553B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E553B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E553B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E553B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E553B_DESCRIPTION4);
	}
	if (aText == KText_e554 || aText == KText_E554 || aText == KText_554)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E554_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E554_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E554_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E554_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E554_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E554_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E554_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E554_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E554_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E554_DESCRIPTION4);
	}
	if (aText == KText_e555 || aText == KText_E555 || aText == KText_555)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E555_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E555_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E555_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E555_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E555_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E555_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E555_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E555_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E555_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E555_DESCRIPTION4);
	}
	if (aText == KText_e556 || aText == KText_E556 || aText == KText_556)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E556_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E556_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E556_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E556_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E556_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E556_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E556_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E556_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E556_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E556_DESCRIPTION4);
	}
	if (aText == KText_e558 || aText == KText_E558 || aText == KText_558)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E558_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E558_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E558_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E558_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E558_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E558_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E558_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E558_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E558_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E558_DESCRIPTION4);
	}
	if (aText == KText_e559 || aText == KText_E559 || aText == KText_559)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E559_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E559_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E559_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E559_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E559_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E559_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E559_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E559_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E559_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E559_DESCRIPTION4);
	}
	if (aText == KText_e570 || aText == KText_E570 || aText == KText_570)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E570_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E570_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E570_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E570_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E570_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E570_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E570_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E570_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E570_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E570_DESCRIPTION4);
	}
	if (aText == KText_e574 || aText == KText_E574 || aText == KText_574)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E574_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E574_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E574_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E574_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E574_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E574_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E574_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E574_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E574_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E574_DESCRIPTION4);
	}
	if (aText == KText_e575 || aText == KText_E575 || aText == KText_575)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E575_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E575_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E575_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E575_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E575_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E575_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E575_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E575_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E575_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E575_DESCRIPTION4);
	}
	if (aText == KText_e576 || aText == KText_E576 || aText == KText_576)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E576_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E576_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E576_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E576_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E576_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E576_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E576_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E576_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E576_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E576_DESCRIPTION4);
	}
	if (aText == KText_e577 || aText == KText_E577 || aText == KText_577)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E577_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E577_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E577_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E577_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E577_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E577_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E577_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E577_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E577_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E577_DESCRIPTION4);
	}
	if (aText == KText_e578 || aText == KText_E578 || aText == KText_578)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E578_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E578_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E578_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E578_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E578_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E578_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E578_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E578_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E578_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E578_DESCRIPTION4);
	}
	if (aText == KText_e579 || aText == KText_E579 || aText == KText_579)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E579_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E579_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E579_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E579_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E579_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E579_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E579_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E579_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E579_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E579_DESCRIPTION4);
	}
	if (aText == KText_e585 || aText == KText_E585 || aText == KText_585)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E585_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E585_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E585_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E585_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E585_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E585_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E585_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E585_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E585_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E585_DESCRIPTION4);
	}



	if (aText == KText_e620 || aText == KText_E620 || aText == KText_620)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E620_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E620_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E620_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E620_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E620_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E620_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E620_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E620_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E620_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E620_DESCRIPTION4);
	}
	if (aText == KText_e621 || aText == KText_E621 || aText == KText_621)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E621_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E621_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E621_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E621_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E621_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E621_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E621_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E621_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E621_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E621_DESCRIPTION4);
	}
	if (aText == KText_e622 || aText == KText_E622 || aText == KText_622)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E622_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E622_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E622_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E622_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E622_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E622_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E622_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E622_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E622_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E622_DESCRIPTION4);
	}
	if (aText == KText_e623 || aText == KText_E623 || aText == KText_623)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E623_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E623_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E623_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E623_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E623_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E623_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E623_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E623_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E623_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E623_DESCRIPTION4);
	}
	if (aText == KText_e624 || aText == KText_E624 || aText == KText_624)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E624_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E624_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E624_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E624_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E624_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E624_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E624_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E624_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E624_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E624_DESCRIPTION4);
	}
	if (aText == KText_e625 || aText == KText_E625 || aText == KText_625)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E625_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E625_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E625_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E625_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E625_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E625_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E625_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E625_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E625_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E625_DESCRIPTION4);
	}
	if (aText == KText_e626 || aText == KText_E626 || aText == KText_626)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E626_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E626_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E626_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E626_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E626_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E626_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E626_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E626_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E626_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E626_DESCRIPTION4);
	}
	if (aText == KText_e627 || aText == KText_E627 || aText == KText_627)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E627_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E627_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E627_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E627_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E627_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E627_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E627_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E627_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E627_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E627_DESCRIPTION4);
	}
	if (aText == KText_e628 || aText == KText_E628 || aText == KText_628)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E628_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E628_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E628_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E628_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E628_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E628_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E628_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E628_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E628_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E628_DESCRIPTION4);
	}
	if (aText == KText_e629 || aText == KText_E629 || aText == KText_629)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E629_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E629_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E629_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E629_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E629_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E629_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E629_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E629_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E629_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E629_DESCRIPTION4);
	}
	if (aText == KText_e630 || aText == KText_E630 || aText == KText_630)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E630_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E630_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E630_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E630_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E630_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E630_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E630_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E630_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E630_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E630_DESCRIPTION4);
	}
	if (aText == KText_e631 || aText == KText_E631 || aText == KText_631)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E631_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E631_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E631_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E631_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E631_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E631_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E631_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E631_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E631_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E631_DESCRIPTION4);
	}
	if (aText == KText_e632 || aText == KText_E632 || aText == KText_632)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E632_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E632_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E632_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E632_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E632_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E632_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E632_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E632_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E632_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E632_DESCRIPTION4);
	}
	if (aText == KText_e633 || aText == KText_E633 || aText == KText_633)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E633_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E633_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E633_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E633_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E633_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E633_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E633_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E633_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E633_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E633_DESCRIPTION4);
	}
	if (aText == KText_e634 || aText == KText_E634 || aText == KText_634)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E634_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E634_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E634_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E634_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E634_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E634_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E634_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E634_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E634_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E634_DESCRIPTION4);
	}
	if (aText == KText_e635 || aText == KText_E635 || aText == KText_635)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E635_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E635_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E635_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E635_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E635_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E635_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E635_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E635_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E635_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E635_DESCRIPTION4);
	}
	if (aText == KText_e640 || aText == KText_E640 || aText == KText_640)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E640_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E640_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E640_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E640_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E640_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E640_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E640_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E640_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E640_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E640_DESCRIPTION4);
	}
	if (aText == KText_e650 || aText == KText_E650 || aText == KText_650)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E650_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E650_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E650_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E650_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E650_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E650_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E650_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E650_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E650_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E650_DESCRIPTION4);
	}



	if (aText == KText_e900 || aText == KText_E900 || aText == KText_900)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E900_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E900_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E900_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E900_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E900_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E900_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E900_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E900_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E900_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E900_DESCRIPTION4);
	}
	if (aText == KText_e901 || aText == KText_E901 || aText == KText_901)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E901_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E901_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E901_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E901_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E901_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E901_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E901_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E901_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E901_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E901_DESCRIPTION4);
	}
	if (aText == KText_e902 || aText == KText_E902 || aText == KText_902)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E902_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E902_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E902_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E902_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E902_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E902_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E902_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E902_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E902_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E902_DESCRIPTION4);
	}
	if (aText == KText_e903 || aText == KText_E903 || aText == KText_903)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E903_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E903_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E903_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E903_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E903_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E903_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E903_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E903_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E903_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E903_DESCRIPTION4);
	}
	if (aText == KText_e904 || aText == KText_E904 || aText == KText_904)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E904_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E904_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E904_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E904_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E904_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E904_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E904_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E904_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E904_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E904_DESCRIPTION4);
	}
	if (aText == KText_e905 || aText == KText_E905 || aText == KText_905)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E905_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E905_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E905_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E905_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E905_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E905_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E905_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E905_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E905_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E905_DESCRIPTION4);
	}
	if (aText == KText_e912 || aText == KText_E912 || aText == KText_912)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E912_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E912_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E912_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E912_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E912_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E912_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E912_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E912_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E912_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E912_DESCRIPTION4);
	}
	if (aText == KText_e914 || aText == KText_E914 || aText == KText_914)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E914_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E914_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E914_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E914_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E914_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E914_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E914_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E914_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E914_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E914_DESCRIPTION4);
	}
	if (aText == KText_e920 || aText == KText_E920 || aText == KText_920)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E920_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E920_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E920_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E920_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E920_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E920_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E920_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E920_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E920_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E920_DESCRIPTION4);
	}
	if (aText == KText_e927b || aText == KText_E927b || aText == KText_927b ||
		 aText == KText_e927 || aText == KText_E927 || aText == KText_927)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E927B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E927B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E927B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E927B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E927B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E927B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E927B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E927B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E927B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E927B_DESCRIPTION4);
	}
	if (aText == KText_e938 || aText == KText_E938 || aText == KText_938)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E938_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E938_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E938_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E938_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E938_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E938_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E938_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E938_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E938_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E938_DESCRIPTION4);
	}
	if (aText == KText_e939 || aText == KText_E939 || aText == KText_939)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E939_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E939_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E939_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E939_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E939_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E939_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E939_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E939_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E939_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E939_DESCRIPTION4);
	}
	if (aText == KText_e941 || aText == KText_E941 || aText == KText_941)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E941_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E941_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E941_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E941_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E941_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E941_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E941_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E941_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E941_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E941_DESCRIPTION4);
	}
	if (aText == KText_e942 || aText == KText_E942 || aText == KText_942)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E942_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E942_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E942_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E942_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E942_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E942_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E942_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E942_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E942_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E942_DESCRIPTION4);
	}
	if (aText == KText_e943a || aText == KText_E943a || aText == KText_943a ||
		 aText == KText_e943 || aText == KText_E943 || aText == KText_943)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E943A_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E943A_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E943A_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E943A_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E943A_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E943A_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E943A_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E943A_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E943A_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E943A_DESCRIPTION4);
	}
	if (aText == KText_e943b || aText == KText_E943b || aText == KText_943b)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E943B_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E943B_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E943B_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E943B_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E943B_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E943B_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E943B_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E943B_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E943B_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E943B_DESCRIPTION4);
	}
	if (aText == KText_e944 || aText == KText_E944 || aText == KText_944)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E944_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E944_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E944_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E944_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E944_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E944_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E944_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E944_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E944_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E944_DESCRIPTION4);
	}
	if (aText == KText_e948 || aText == KText_E948 || aText == KText_948)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E948_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E948_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E948_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E948_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E948_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E948_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E948_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E948_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E948_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E948_DESCRIPTION4);
	}
	if (aText == KText_e949 || aText == KText_E949 || aText == KText_949)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E949_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E949_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E949_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E949_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E949_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E949_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E949_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E949_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E949_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E949_DESCRIPTION4);
	}
	if (aText == KText_e950 || aText == KText_E950 || aText == KText_950)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E950_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E950_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E950_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E950_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E950_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E950_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E950_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E950_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E950_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E950_DESCRIPTION4);
	}
	if (aText == KText_e951 || aText == KText_E951 || aText == KText_951)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E951_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E951_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E951_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E951_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E951_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E951_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E951_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E951_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E951_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E951_DESCRIPTION4);
	}
	if (aText == KText_e952 || aText == KText_E952 || aText == KText_952)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E952_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E952_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E952_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E952_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E952_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E952_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E952_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E952_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E952_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E952_DESCRIPTION4);
	}
	if (aText == KText_e953 || aText == KText_E953 || aText == KText_953)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E953_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E953_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E953_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E953_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E953_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E953_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E953_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E953_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E953_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E953_DESCRIPTION4);
	}
	if (aText == KText_e954 || aText == KText_E954 || aText == KText_954)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E954_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E954_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E954_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E954_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E954_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E954_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E954_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E954_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E954_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E954_DESCRIPTION4);
	}
	if (aText == KText_e955 || aText == KText_E955 || aText == KText_955)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E955_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E955_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E955_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E955_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E955_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E955_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E955_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E955_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E955_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E955_DESCRIPTION4);
	}
	if (aText == KText_e957 || aText == KText_E957 || aText == KText_957)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E957_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E957_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E957_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E957_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E957_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E957_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E957_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E957_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E957_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E957_DESCRIPTION4);
	}
	if (aText == KText_e959 || aText == KText_E959 || aText == KText_959)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E959_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E959_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E959_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E959_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E959_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E959_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E959_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E959_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E959_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E959_DESCRIPTION4);
	}
	if (aText == KText_e965 || aText == KText_E965 || aText == KText_965)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E965_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E965_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E965_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E965_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E965_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E965_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E965_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E965_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E965_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E965_DESCRIPTION4);
	}
	if (aText == KText_e966 || aText == KText_E966 || aText == KText_966)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E966_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E966_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E966_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E966_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E966_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E966_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E966_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E966_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E966_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E966_DESCRIPTION4);
	}
	if (aText == KText_e967 || aText == KText_E967 || aText == KText_967)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E967_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E967_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E967_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E967_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E967_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E967_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E967_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E967_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E967_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E967_DESCRIPTION4);
	}
	if (aText == KText_e999 || aText == KText_E999 || aText == KText_999)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E999_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E999_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E999_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E999_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E999_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E999_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E999_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E999_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E999_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E999_DESCRIPTION4);
	}
	if (aText == KText_e1103 || aText == KText_E1103 || aText == KText_1103)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1103_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1103_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1103_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1103_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1103_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1103_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1103_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1103_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1103_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1103_DESCRIPTION4);
	}
	if (aText == KText_e1105 || aText == KText_E1105 || aText == KText_1105)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1105_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1105_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1105_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1105_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1105_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1105_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1105_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1105_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1105_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1105_DESCRIPTION4);
	}
	if (aText == KText_e1200 || aText == KText_E1200 || aText == KText_1200)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1200_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1200_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1200_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1200_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1200_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1200_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1200_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1200_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1200_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1200_DESCRIPTION4);
	}
	if (aText == KText_e1201 || aText == KText_E1201 || aText == KText_1201)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1201_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1201_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1201_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1201_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1201_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1201_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1201_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1201_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1201_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1201_DESCRIPTION4);
	}
	if (aText == KText_e1202 || aText == KText_E1202 || aText == KText_1202)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1202_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1202_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1202_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1202_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1202_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1202_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1202_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1202_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1202_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1202_DESCRIPTION4);
	}
	if (aText == KText_e1404 || aText == KText_E1404 || aText == KText_1404)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1404_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1404_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1404_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1404_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1404_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1404_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1404_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1404_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1404_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1404_DESCRIPTION4);
	}
	if (aText == KText_e1410 || aText == KText_E1410 || aText == KText_1410)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1410_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1410_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1410_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1410_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1410_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1410_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1410_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1410_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1410_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1410_DESCRIPTION4);
	}
	if (aText == KText_e1412 || aText == KText_E1412 || aText == KText_1412)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1412_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1412_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1412_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1412_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1412_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1412_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1412_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1412_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1412_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1412_DESCRIPTION4);
	}
	if (aText == KText_e1413 || aText == KText_E1413 || aText == KText_1413)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1413_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1413_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1413_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1413_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1413_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1413_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1413_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1413_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1413_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1413_DESCRIPTION4);
	}
	if (aText == KText_e1414 || aText == KText_E1414 || aText == KText_1414)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1414_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1414_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1414_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1414_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1414_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1414_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1414_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1414_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1414_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1414_DESCRIPTION4);
	}
	if (aText == KText_e1420 || aText == KText_E1420 || aText == KText_1420)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1420_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1420_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1420_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1420_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1420_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1420_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1420_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1420_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1420_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1420_DESCRIPTION4);
	}
	if (aText == KText_e1422 || aText == KText_E1422 || aText == KText_1422)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1422_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1422_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1422_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1422_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1422_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1422_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1422_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1422_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1422_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1422_DESCRIPTION4);
	}
	if (aText == KText_e1440 || aText == KText_E1440 || aText == KText_1440)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1440_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1440_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1440_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1440_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1440_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1440_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1440_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1440_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1440_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1440_DESCRIPTION4);
	}
	if (aText == KText_e1442 || aText == KText_E1442 || aText == KText_1442)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1442_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1442_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1442_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1442_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1442_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1442_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1442_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1442_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1442_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1442_DESCRIPTION4);
	}
	if (aText == KText_e1450 || aText == KText_E1450 || aText == KText_1450)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1450_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1450_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1450_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1450_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1450_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1450_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1450_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1450_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1450_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1450_DESCRIPTION4);
	}
	if (aText == KText_e1451 || aText == KText_E1451 || aText == KText_1451)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1451_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1451_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1451_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1451_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1451_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1451_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1451_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1451_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1451_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1451_DESCRIPTION4);
	}
	if (aText == KText_e1505 || aText == KText_E1505 || aText == KText_1505)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1505_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1505_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1505_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1505_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1505_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1505_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1505_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1505_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1505_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1505_DESCRIPTION4);
	}
	if (aText == KText_e1518 || aText == KText_E1518 || aText == KText_1518)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1518_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1518_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1518_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1518_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1518_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1518_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1518_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1518_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1518_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1518_DESCRIPTION4);
	}
	if (aText == KText_e1520 || aText == KText_E1520 || aText == KText_1520)
	{
			textContainerTitle = iEikonEnv->AllocReadResourceL(R_E1520_TITLE);
			textContainerName = iEikonEnv->AllocReadResourceL(R_E1520_NAME);
			textContainerName2 = iEikonEnv->AllocReadResourceL(R_E1520_NAME2);
			textContainerFunction = iEikonEnv->AllocReadResourceL(R_E1520_FUNCTION);
			textContainerFoods = iEikonEnv->AllocReadResourceL(R_E1520_FOODS);
			textContainerFoods2 = iEikonEnv->AllocReadResourceL(R_E1520_FOODS2);
			textContainerDescription = iEikonEnv->AllocReadResourceL(R_E1520_DESCRIPTION);
			textContainerDescription2 = iEikonEnv->AllocReadResourceL(R_E1520_DESCRIPTION2);
			textContainerDescription3 = iEikonEnv->AllocReadResourceL(R_E1520_DESCRIPTION3);
			textContainerDescription4 = iEikonEnv->AllocReadResourceL(R_E1520_DESCRIPTION4);
	}


	iENumberTitle -> Des().Copy(*textContainerTitle);
	iENumberName -> Des().Copy(*textContainerName);
	iENumberName2 -> Des().Copy(*textContainerName2);
	iENumberFunction -> Des().Copy(*textContainerFunction);
	iENumberFoods -> Des().Copy(*textContainerFoods);
	iENumberFoods2 -> Des().Copy(*textContainerFoods2);
	iENumberDescription -> Des().Copy(*textContainerDescription);
	iENumberDescription2 -> Des().Copy(*textContainerDescription2);
	iENumberDescription3 -> Des().Copy(*textContainerDescription3);
	iENumberDescription4 -> Des().Copy(*textContainerDescription4);

	delete textContainerTitle;
	delete textContainerName;
	delete textContainerName2;
	delete textContainerFunction;
	delete textContainerFoods;
	delete textContainerFoods2;
	delete textContainerDescription;
	delete textContainerDescription2;
	delete textContainerDescription3;
	delete textContainerDescription4;
}
