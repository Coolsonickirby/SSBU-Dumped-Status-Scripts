
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AirLassoFailure_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  long lVar4;
  long lVar5;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack96,0xadd214353);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  lVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar4,lVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack96,0xcec1191d4);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  lVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar4,lVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack96,HIT_STATUS_OFF);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar3 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Tantan::set_hit_status_arm(pBVar6,iVar2,HVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_TANTAN_STATUS_AIR_LASSO_FAILURE_WORK_FLAG_HIT_STATUS_OFF);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_71000278f0(this);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100039590);
  lib::L2CValue::L2CValue(aLStack112,0x9e7d3cd80);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_REWIND);
  lua2cpp::L2CFighterCommon::status_AirLassoFailure
            (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

