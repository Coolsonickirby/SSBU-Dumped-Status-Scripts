
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyBullet::status::Fly_main(L2CWeaponBuddyBullet *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_TYPE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_BULLET_TYPE_MISSILE);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_LEVEL);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_BULLET_LEVEL_WEAK_1);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_BUDDY_BULLET_INSTANCE_WORK_ID_INT_LEVEL);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_BULLET_LEVEL_WEAK_2);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x61fe9b33e);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue(aLStack128,false);
        HVar4 = lib::L2CValue::as_hash(aLStack80);
        fVar5 = (float)lib::L2CValue::as_number(aLStack96);
        fVar6 = (float)lib::L2CValue::as_number(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x908c3610c);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue(aLStack128,false);
        HVar4 = lib::L2CValue::as_hash(aLStack80);
        fVar5 = (float)lib::L2CValue::as_number(aLStack96);
        fVar6 = (float)lib::L2CValue::as_number(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x991ca30b6);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      fVar5 = (float)lib::L2CValue::as_number(aLStack96);
      fVar6 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x72c987877);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    fVar5 = (float)lib::L2CValue::as_number(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

