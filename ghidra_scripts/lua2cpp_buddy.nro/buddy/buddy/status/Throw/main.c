
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::Throw_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_Throw(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_THROW_LW_FLAG_BURY);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,lVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x83ec83f4b);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
    lib::L2CValue::L2CValue(aLStack112,0x16f5d65a4a);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar6,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack128,0x1692304bab);
    uVar5 = lib::L2CValue::as_integer(aLStack64);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack144,0x1d39b909ee);
    uVar5 = lib::L2CValue::as_integer(aLStack64);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::operator_(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar5 = lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator_(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack144,iVar1);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,pvVar8);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
    fVar10 = (float)app::lua_bind::DamageModule__damage_impl(pBVar9,iVar1);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::operator_(aLStack144,aLStack128);
    lib::L2CValue::operator_(aLStack112,aLStack176);
    lib::L2CValue::operator_(aLStack112,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BUDDY_STATUS_THROW_INT_CLATTER_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack64,Throw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

