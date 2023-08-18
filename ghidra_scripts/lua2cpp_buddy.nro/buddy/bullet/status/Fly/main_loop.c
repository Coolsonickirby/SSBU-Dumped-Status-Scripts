
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyBullet::status::Fly_main_loop(L2CWeaponBuddyBullet *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue *this_00;
  BattleObjectModuleAccessor **ppBVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong uStack96;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  ppBVar5 = &this->moduleAccessor;
  iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar5,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,0);
  uVar2 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,_WEAPON_BUDDY_BULLET_STATUS_KIND_EXPLODE);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack112,0.0);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_BOUND_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar5,iVar1);
  lib::L2CValue::L2CValue(aLStack144,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,_ITEM_BUDDYBOMB_BOUND_KIND_NONE);
  uVar2 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_BOUND_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar5,iVar1);
    lib::L2CValue::L2CValue(aLStack144,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,_ITEM_BUDDYBOMB_BOUND_KIND_VERTICAL);
    uVar2 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_BOUND_KIND);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar5,iVar1);
      lib::L2CValue::L2CValue(aLStack144,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_ITEM_BUDDYBOMB_BOUND_KIND_HORIZONTAL);
      uVar2 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar2 & 1) == 0) goto LAB_7100033548;
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_TYPE);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar5,iVar1);
      lib::L2CValue::L2CValue(aLStack144,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_WEAPON_BUDDY_BULLET_TYPE_MISSILE);
      uVar2 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar2 & 1) == 0) {
        fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar5,0);
        lib::L2CValue::L2CValue(aLStack144,fVar6);
        lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
        lib::L2CValue::L2CValue(aLStack208,0x1c43eeb9e6);
        uVar2 = lib::L2CValue::as_integer(aLStack192);
        uVar4 = lib::L2CValue::as_integer(aLStack208);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar5,uVar2,uVar4);
        lib::L2CValue::L2CValue(aLStack176,fVar6);
        lib::L2CValue::operator_(aLStack176,aLStack128);
        lib::L2CValue::operator_(aLStack144,aLStack160);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack96);
      }
      else {
        fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar5,0);
        lib::L2CValue::L2CValue(aLStack144,fVar6);
        lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
        lib::L2CValue::L2CValue(aLStack208,0x1d834028ef);
        uVar2 = lib::L2CValue::as_integer(aLStack192);
        uVar4 = lib::L2CValue::as_integer(aLStack208);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar5,uVar2,uVar4);
        lib::L2CValue::L2CValue(aLStack176,fVar6);
        lib::L2CValue::operator_(aLStack176,aLStack128);
        lib::L2CValue::operator_(aLStack144,aLStack160);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_TYPE);
      iVar1 = lib::L2CValue::as_integer(aLStack160);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar5,iVar1);
      lib::L2CValue::L2CValue(aLStack144,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_WEAPON_BUDDY_BULLET_TYPE_MISSILE);
      uVar2 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar2 & 1) == 0) {
        fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar5,0);
        lib::L2CValue::L2CValue(aLStack144,fVar6);
        lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
        lib::L2CValue::L2CValue(aLStack208,0x1ef33392df);
        uVar2 = lib::L2CValue::as_integer(aLStack192);
        uVar4 = lib::L2CValue::as_integer(aLStack208);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar5,uVar2,uVar4);
        lib::L2CValue::L2CValue(aLStack176,fVar6);
        lib::L2CValue::operator_(aLStack176,aLStack128);
        lib::L2CValue::operator_(aLStack144,aLStack160);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack96);
      }
      else {
        fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar5,0);
        lib::L2CValue::L2CValue(aLStack144,fVar6);
        lib::L2CValue::L2CValue(aLStack192,0xce2c373c3);
        lib::L2CValue::L2CValue(aLStack208,0x1edb8ea42e);
        uVar2 = lib::L2CValue::as_integer(aLStack192);
        uVar4 = lib::L2CValue::as_integer(aLStack208);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar5,uVar2,uVar4);
        lib::L2CValue::L2CValue(aLStack176,fVar6);
        lib::L2CValue::operator_(aLStack176,aLStack128);
        lib::L2CValue::operator_(aLStack144,aLStack160);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack96);
      }
    }
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    this_00 = aLStack192;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,0x66933a7e6);
    HVar3 = lib::L2CValue::as_hash((L2CValue *)&uStack96);
    fVar6 = (float)app::sv_math::randf(HVar3,1.0);
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_TYPE);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar5,iVar1);
    lib::L2CValue::L2CValue(aLStack160,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,_WEAPON_BUDDY_BULLET_TYPE_MISSILE);
    uVar2 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar2 & 1) == 0) {
      fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar5,0);
      lib::L2CValue::L2CValue(aLStack160,fVar6);
      lib::L2CValue::L2CValue(aLStack224,0xce2c373c3);
      lib::L2CValue::L2CValue(aLStack240,0x1cdea27f54);
      uVar2 = lib::L2CValue::as_integer(aLStack224);
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar5,uVar2,uVar4);
      lib::L2CValue::L2CValue(aLStack208,fVar6);
      lib::L2CValue::operator_(aLStack208,aLStack144);
      lib::L2CValue::operator_(aLStack192,aLStack128);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack96);
    }
    else {
      fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar5,0);
      lib::L2CValue::L2CValue(aLStack160,fVar6);
      lib::L2CValue::L2CValue(aLStack224,0xce2c373c3);
      lib::L2CValue::L2CValue(aLStack240,0x1d1e0cee5d);
      uVar2 = lib::L2CValue::as_integer(aLStack224);
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar5,uVar2,uVar4);
      lib::L2CValue::L2CValue(aLStack208,fVar6);
      lib::L2CValue::operator_(aLStack208,aLStack144);
      lib::L2CValue::operator_(aLStack192,aLStack128);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack96);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    this_00 = aLStack160;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::_L2CValue(aLStack144);
LAB_7100033548:
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  uVar2 = lib::L2CValue::as_number(aLStack144);
  lVar8 = lib::L2CValue::as_number(aLStack160);
  uVar7 = lib::L2CValue::as_number(aLStack112);
  uStack96 = uVar2 & 0xffffffff | lVar8 << 0x20;
  uStack88 = (ulong)uVar7;
  app::lua_bind::PostureModule__set_rot_impl(*ppBVar5,(Vector3f *)&uStack96,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,0.0);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,_WEAPON_BUDDY_BULLET_STATUS_WORK_ID_FLOAT_ROT_Z);
  fVar6 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar5,fVar6,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

