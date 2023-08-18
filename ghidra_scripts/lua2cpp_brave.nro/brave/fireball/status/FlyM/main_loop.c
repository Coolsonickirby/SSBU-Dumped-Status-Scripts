
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveFireball::status::FlyM_main_loop(L2CWeaponBraveFireball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_FLAG_HIT_WALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lua2cpp::L2CWeaponCommon::sub_ground_module_is_touch_all_consider_speed(this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        pLVar7 = aLStack96;
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
        lib::L2CValue::L2CValue(aLStack80,1);
        uVar6 = lib::L2CValue::operator__(aLStack80,pLVar7);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) goto LAB_7100041374;
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_FLAG_HIT_WALL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
        lib::L2CValue::L2CValue(aLStack80,1);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,5);
          uVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_STATUS_KIND_BURST_M);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_7100041270;
        }
        lib::L2CValue::L2CValue(aLStack80,2);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar3,0);
        pLVar7 = aLStack80;
      }
      lib::L2CValue::_L2CValue(pLVar7);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack80,2);
      uVar6 = lib::L2CValue::operator__(aLStack80,pLVar7);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,5);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_STATUS_KIND_BURST_M);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100041270:
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar7 = aLStack80;
        goto LAB_71000416f4;
      }
    }
LAB_7100041374:
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_FLAG_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,5);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_BRAVE_FIREBALL_STATUS_KIND_BURST_M);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack144,0);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar3,false);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_INT_EFFECT_HANDLE_M_0);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,5);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::EffectModule__detach_impl(this->moduleAccessor,uVar4,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_INT_EFFECT_HANDLE_M_0);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack144,1);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar3,false);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) goto LAB_71000416f8;
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_INT_EFFECT_HANDLE_M_0 + 1);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,5);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::EffectModule__detach_impl(this->moduleAccessor,uVar4,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_INT_EFFECT_HANDLE_M_0 + 1);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    pLVar7 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,5);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar7 = aLStack96;
  }
LAB_71000416f4:
  lib::L2CValue::_L2CValue(pLVar7);
LAB_71000416f8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

