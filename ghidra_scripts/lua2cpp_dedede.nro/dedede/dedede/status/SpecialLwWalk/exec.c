
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialLwAttack_exec(L2CFighterDedede *this,L2CValue *return_value)

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
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_LW_ATTACK);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX_CHK_END);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue(aLStack112,0x20a2537b48);
        lib::L2CValue::L2CValue(aLStack128,0);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        uVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar6,uVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_CHANGE_SE_HOLD_MAX);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          FUN_710000b860(this);
          lib::L2CValue::L2CValue(aLStack112,0x15de4789f4);
          HVar6 = lib::L2CValue::as_hash(aLStack112);
          iVar2 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar6,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack80,iVar2);
          lib::L2CValue::operator_(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_INT_SE_HANDLE);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_CHANGE_SE_HOLD_MAX);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX_CHANGE_RUMBLE);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_FLAG_HOLD_MAX_CHK_END);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x110371c42a);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_CONTROLLER_RUMBLE_ID_SPECIAL_LW);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        uVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ControlModule__stop_rumble_kind_impl(this->moduleAccessor,HVar6,uVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x119a789590);
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack128,false);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DEDEDE_CONTROLLER_RUMBLE_ID_SPECIAL_LW);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        uVar3 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::ControlModule__set_rumble_impl
                  (this->moduleAccessor,HVar6,iVar2,(bool)(bVar1 & 1),uVar3);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      fVar8 = (float)app::lua_bind::DamageModule__damage_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0x13190e3939);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      uVar5 = lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_INT_HOLD_MAX_DAMAGE_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_INT_HOLD_MAX_DAMAGE_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack80,iVar2);
        lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack160,0xfb15550ff);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack128,fVar8);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_INT_HOLD_MAX_DAMAGE_VALUE);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::_L2CValue(aLStack80);
          fVar8 = (float)app::lua_bind::FighterManager__one_on_one_ratio_impl
                                   (LUA_SCRIPT_LINE_SYSTEM_POST);
          lib::L2CValue::L2CValue(aLStack128,fVar8);
          lib::L2CValue::L2CValue(aLStack80,1.0);
          lib::L2CValue::operator_(aLStack80,aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack128);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          app::lua_bind::DamageModule__add_damage_impl(this->moduleAccessor,fVar8,0);
          lib::L2CValue::L2CValue(aLStack80,0);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_DEDEDE_STATUS_JET_HAMMER_WORK_INT_HOLD_MAX_DAMAGE_COUNT);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

