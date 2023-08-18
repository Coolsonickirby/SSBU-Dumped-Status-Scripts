
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialHiLanding_main(L2CFighterKrool *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BACKPACK);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KROOL_BACKPACK_STATUS_KIND_LANDING);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0x12cb4acfbc);
  lib::L2CValue::L2CValue(aLStack96,0x12cb4acfbc);
  lib::L2CValue::L2CValue(aLStack112,true);
  FUN_710001dba0(this,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack144,0x1850debdad);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x12cb4acfbc);
  HVar6 = lib::L2CValue::as_hash(aLStack64);
  uVar3 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar6);
  lib::L2CValue::L2CValue(aLStack144,uVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator_(aLStack64,aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::operator_(aLStack144,aLStack128);
    fVar7 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar7);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_CLIFF_HANG_DATA_SPECIAL_HI);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialHiLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

