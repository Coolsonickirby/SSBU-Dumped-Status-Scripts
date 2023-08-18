
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialSAttack_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  L2CValue *this_00;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_S_ATTACK);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX_CHK_END);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue(aLStack96,0x1c821056be);
        lib::L2CValue::L2CValue(aLStack112,0);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        HVar6 = lib::L2CValue::as_hash(aLStack96);
        uVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar6,uVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      fVar8 = (float)app::lua_bind::DamageModule__damage_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack128,0x13190e3939);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      uVar5 = lib::L2CValue::operator_(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_MAX_DAMAGE_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_MAX_DAMAGE_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack80,iVar2);
        lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack144,0xfb15550ff);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar8);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_MAX_DAMAGE_VALUE);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::_L2CValue(aLStack80);
          fVar8 = (float)app::lua_bind::FighterManager__one_on_one_ratio_impl
                                   (LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
          lib::L2CValue::L2CValue(aLStack80,fVar8);
          fVar8 = (float)lib::L2CValue::as_number(aLStack80);
          app::lua_bind::DamageModule__add_damage_impl(this->moduleAccessor,fVar8,0);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_S_WORK_INT_HOLD_MAX_DAMAGE_COUNT);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_HOLD_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CHANGE_SE_HOLD_MAX);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        FUN_7100014c50(this);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_SPECIAL_S_FLAG_CHANGE_SE_HOLD_MAX);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

