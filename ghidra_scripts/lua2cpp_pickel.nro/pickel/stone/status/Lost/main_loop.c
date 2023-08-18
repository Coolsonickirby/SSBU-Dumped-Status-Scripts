
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelStone::status::Lost_main_loop(L2CWeaponPickelStone *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *in_x2;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined local_80 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)local_80,0);
  uVar4 = lib::L2CValue::operator_(aLStack64,(L2CValue *)local_80);
  lib::L2CValue::_L2CValue((L2CValue *)local_80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue((L2CValue *)local_80);
  }
  lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_80,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)local_80);
  lib::L2CValue::_L2CValue((L2CValue *)local_80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_80,(float)uVar7);
    pLVar5 = (L2CValue *)(local_80 + 0x10);
    lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar7 >> 0x20));
    lib::L2CValue::operator_(aLStack80,(L2CValue *)local_80);
    lib::L2CValue::operator_(aLStack96,pLVar5);
    lib::L2CValue::_L2CValue(pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CAgent::math_atan((L2CAgent *)aLStack80,aLStack96,in_x2);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar6);
    pLVar5 = aLStack176;
    lib::L2CValue::operator_(aLStack160,pLVar5);
    lib::L2CAgent::math_deg((L2CAgent *)local_80,pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)local_80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    lVar8 = lib::L2CValue::as_number(aLStack160);
    uVar3 = lib::L2CValue::as_number(aLStack176);
    local_80._0_8_ = (void **)(uVar4 & 0xffffffff | lVar8 << 0x20);
    local_80._8_8_ = (lua_State *)(ulong)uVar3;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)local_80,0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

