
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPalutenaAutoaimbullet::status::Shot_main_loop
          (L2CWeaponPalutenaAutoaimbullet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_PALUTENA_AUTOAIMBULLET_INSTANCE_WORK_ID_FLAG_HAS_EFFECT_BOUND);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)&local_70);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      fVar6 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      fVar6 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      fVar6 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack192,0x1565f49347);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,1.0);
      lib::L2CValue::L2CValue(aLStack272,EFFECT_SUB_ATTRIBUTE_NONE);
      lib::L2CValue::L2CValue(aLStack288,-1);
      HVar5 = lib::L2CValue::as_hash(aLStack192);
      uVar7 = lib::L2CValue::as_number(aLStack160);
      lVar8 = lib::L2CValue::as_number(aLStack144);
      uVar3 = lib::L2CValue::as_number(aLStack128);
      local_60 = uVar7 & 0xffffffff | lVar8 << 0x20;
      uStack88 = (ulong)uVar3;
      uVar7 = lib::L2CValue::as_number(aLStack208);
      lVar8 = lib::L2CValue::as_number(aLStack224);
      uVar3 = lib::L2CValue::as_number(aLStack240);
      local_70 = uVar7 & 0xffffffff | lVar8 << 0x20;
      uStack104 = (ulong)uVar3;
      fVar6 = (float)lib::L2CValue::as_number(aLStack256);
      uVar3 = lib::L2CValue::as_integer(aLStack272);
      iVar4 = lib::L2CValue::as_integer(aLStack288);
      uVar3 = app::lua_bind::EffectModule__req_impl
                        (this->moduleAccessor,HVar5,(Vector3f *)&local_60,(Vector3f *)&local_70,
                         fVar6,uVar3,iVar4,false,0);
      lib::L2CValue::L2CValue(aLStack176,uVar3);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,
                 _WEAPON_PALUTENA_AUTOAIMBULLET_INSTANCE_WORK_ID_FLAG_HAS_EFFECT_BOUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

