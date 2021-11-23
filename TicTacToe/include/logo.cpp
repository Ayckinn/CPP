/////////////////////////////// OBJECT CREATION ///////////////////////////////
Logo::Logo() {}
Logo::~Logo() {}

FontColor logo_fc;

/////////////////////////////////// METHODS ///////////////////////////////////
void Logo::logoBeta()
{
  	logo_fc.greyString("-------------------------------------------------\n");
  	logo_fc.redString("   TIC TAC TOE V1.0 Beta version in progress...\n");
  	logo_fc.greyString("-------------------------------------------------\n");

  	return;
}
/*---------------------------------------------------------------------------*/
void Logo::logoTitle()
{
	logo_fc.greyString("\t================================\n");
	logo_fc.greyString("\t==");
	logo_fc.yellowString("       TIC TAC TOE v1.0");
	logo_fc.greyString("     ==\n");
	logo_fc.greyString("\t==");
	logo_fc.blueString("  LINUX VERSION - @Ayckinn");
	logo_fc.greyString("  ==\n");
	logo_fc.greyString("\t================================\n");

	return;
}