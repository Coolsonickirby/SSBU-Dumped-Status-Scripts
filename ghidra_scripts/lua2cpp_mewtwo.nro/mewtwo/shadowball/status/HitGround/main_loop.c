
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMewtwoShadowball::status::HitGround_main_loop
          (L2CWeaponMewtwoShadowball *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_INT_SHOOT_MOTION_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,lVar3);
  lib::L2CValue::L2CValue(aLStack64,0x57044fcbe);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar2,false);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_710001ae88;
    lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar4 = lib::L2CValue::operator_(aLStack64,pLVar5);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_710001ae88;
    lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710001ae88:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

