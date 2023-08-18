
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::CatchPhysicsRewind_main(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  HitStatus HVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  BattleObjectModuleAccessor *pBVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar1,fVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar1,fVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_TURN);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_CATCH_REVERSE_ROT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_CATCH_REVERSE_ROT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,true);
    FUN_7100018520(this,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_7100021430(this);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar2 = lib::L2CValue::as_integer(aLStack112);
  app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar5,iVar1,HVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::L2CValue(aLStack112,HIT_STATUS_OFF);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar2 = lib::L2CValue::as_integer(aLStack112);
  app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar5,iVar1,HVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  FUN_7100021cd0(this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  FUN_7100021cd0(this,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,CatchPhysicsRewind_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

