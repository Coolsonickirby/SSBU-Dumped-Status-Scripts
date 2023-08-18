
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyPad::status::Fall_main_loop(L2CWeaponBuddyPad *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_LAY_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) goto LAB_7100037120;
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_710003715c;
      lib::L2CValue::L2CValue(aLStack80,0x4fb50df0c);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      fVar6 = (float)lib::L2CValue::as_number(aLStack96);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_PAD_STATUS_KIND_BOUND);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
  }
  else {
LAB_7100037120:
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_PAD_STATUS_KIND_BOUND);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710003715c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

