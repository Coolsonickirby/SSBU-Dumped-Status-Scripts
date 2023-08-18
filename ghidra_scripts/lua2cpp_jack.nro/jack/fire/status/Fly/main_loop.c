
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackFire::status::Fly_main_loop(L2CWeaponJackFire *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,
               GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT | GROUND_TOUCH_FLAG_DOWN |
               _GROUND_TOUCH_FLAG_DOWN_LEFT | _GROUND_TOUCH_FLAG_DOWN_RIGHT);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_710003be70;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_KIND_JACK_FIRE2);
    uVar4 = lib::L2CValue::operator__(pLVar6,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack80,0x10d7892b94);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar2,HVar5,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_SOUND);
      lib::L2CValue::L2CValue(aLStack80,0xff2148ecc);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar2,HVar5,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      goto LAB_710003bd60;
    }
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_JACK_FIRE_STATUS_KIND_HIT);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack80,0xadad65bbe);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar2,HVar5,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
LAB_710003bd60:
    lib::L2CValue::_L2CValue(aLStack64);
    pLVar6 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710003be70:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

