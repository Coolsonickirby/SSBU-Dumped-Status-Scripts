
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::FinalAttack_end(L2CFighterRoy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  L2CValue *this_00;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  Hash40 HVar9;
  int iVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
  uVar6 = lib::L2CValue::operator__(this_00,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_STATUS_FINAL_WORK_INT_TARGET_SUM);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if (-1 < iVar3) {
      iVar10 = -1;
      do {
        lib::L2CValue::L2CValue
                  (aLStack112,iVar10 + _FIGHTER_ROY_STATUS_FINAL_WORK_INT_TARGET_ID + 1);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack144,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::sv_battle_object::is_active(uVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar5);
          if (pvVar7 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack176,pvVar7);
          }
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack176);
          iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar8);
          lib::L2CValue::L2CValue(aLStack160,iVar4);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_CHROM_FINAL_TARGET_DAMAGE);
          uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_LINK_NO_FINAL);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            uVar5 = lib::L2CValue::as_integer(aLStack144);
            bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar4,uVar5);
            lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_LINK_NO_FINAL);
            lib::L2CValue::L2CValue(aLStack160,0xca6184e65);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            HVar9 = lib::L2CValue::as_hash(aLStack160);
            app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar4,HVar9);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROY_LINK_NO_FINAL);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::_L2CValue(aLStack112);
          }
        }
        lib::L2CValue::_L2CValue(aLStack144);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

