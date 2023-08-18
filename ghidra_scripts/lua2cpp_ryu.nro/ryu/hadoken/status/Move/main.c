
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRyuHadoken::status::Move_main(L2CWeaponRyuHadoken *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_TYPE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_RYU_HADOKEN_TYPE_NORMAL);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_STRENGTH);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STRENGTH_W);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_STRENGTH);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STRENGTH_M);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x806cf46d1);
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
        lib::L2CValue::L2CValue(aLStack80,0x8fcc07bb2);
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
      lib::L2CValue::L2CValue(aLStack80,0x801a282c8);
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
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_STRENGTH);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STRENGTH_W);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_STRENGTH);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STRENGTH_M);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x6eaadca2d);
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
        lib::L2CValue::L2CValue(aLStack80,0x610a2f74e);
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
      lib::L2CValue::L2CValue(aLStack80,0x6edc00e34);
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
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    FUN_710004cc60(aLStack96,this,aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_710004d700);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Move_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

