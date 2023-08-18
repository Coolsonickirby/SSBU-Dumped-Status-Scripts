
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSnake::status::SpecialNHoldLanding_init(L2CFighterSnake *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
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
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WAIT);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WAIT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_F);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_F);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_B);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_B);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_BRAKE_F);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_BRAKE_F);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_BRAKE_B);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_WALK_BRAKE_B);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_DASH_F);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_DASH_F);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_DASH_B);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_DASH_B);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_AIR);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP_SQUAT);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_JUMP_SQUAT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP_AERIAL);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_JUMP_AERIAL);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_LANDING);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_LANDING);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP_AERIAL);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_FLY);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP_AERIAL);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xe06860a20);
    lib::L2CValue::L2CValue(aLStack96,0x1244d4ffef);
    lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessShoot_initShoot_Common
              (this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x199a1c657c);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    fVar6 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
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
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

