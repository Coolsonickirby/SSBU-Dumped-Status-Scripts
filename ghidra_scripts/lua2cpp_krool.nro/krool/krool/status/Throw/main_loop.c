
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::Throw_main_loop(L2CFighterKrool *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  Hash40 HVar9;
  L2CValue *pLVar10;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::status_Throw_Main(this);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,lVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x83ec83f4b);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) goto LAB_7100018790;
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_STATUS_THROW_LW_FLAG_BURY_SET_CLATTER);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_STATUS_THROW_LW_FLAG_BURY);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) goto LAB_7100018790;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ATTACK_ABSOLUTE_KIND_THROW);
    lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue(aLStack176,0x54f934137);
    lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    HVar9 = lib::L2CValue::as_hash(aLStack176);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    iVar5 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::AttackModule__hit_absolute_joint_impl
              (this->moduleAccessor,iVar3,uVar6,HVar9,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_THROW_LW_FLAG_BURY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_THROW_LW_FLAG_BURY_SET_CLATTER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    pLVar10 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack160,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
        lib::L2CValue::L2CValue(aLStack160,0x1c4ce5ec85);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        HVar9 = lib::L2CValue::as_hash(aLStack160);
        app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar9);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
        pLVar10 = aLStack144;
        goto LAB_7100018760;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
      lib::L2CValue::L2CValue(aLStack144,0x1c4ce5ec85);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      HVar9 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar9,0);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar10 = aLStack96;
LAB_7100018760:
      lib::L2CValue::_L2CValue(pLVar10);
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_STATUS_THROW_LW_FLAG_BURY_SET_CLATTER);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    pLVar10 = aLStack144;
  }
  lib::L2CValue::_L2CValue(pLVar10);
LAB_7100018790:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

