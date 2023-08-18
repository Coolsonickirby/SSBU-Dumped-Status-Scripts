
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialHiJump_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  Hash40 HVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xa28f17495);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar4,fVar5,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_BUDDY_CLIFF_HANG_DATA_SPECIAL_HI);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  uVar6 = lib::L2CValue::as_number(aLStack96);
  uVar2 = lib::L2CValue::as_number(aLStack112);
  local_50 = uVar6 & 0xffffffff | (ulong)uVar2 << 0x20;
  uStack72 = 0;
  app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SpecialHiJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  return;
}

