
void __thiscall
L2CFighterGanon::status::SpecialHiThrow_main(L2CFighterGanon *this,L2CValue *return_value)

{
  byte bVar1;
  Hash40 HVar2;
  L2CValue *this_00;
  float fVar3;
  uint uVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  fVar3 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-7.0);
  lib::L2CValue::operator_((L2CValue *)&local_50,aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar3);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  fVar3 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar3);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar3 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar3);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar3 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar3);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack128,aLStack144);
  uVar6 = lib::L2CValue::as_number(aLStack160);
  lVar7 = lib::L2CValue::as_number(aLStack112);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  local_50 = uVar6 & 0xffffffff | lVar7 << 0x20;
  uStack72 = (ulong)uVar4;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x108cd60ace);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,false);
  HVar2 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  fVar3 = (float)lib::L2CValue::as_number(aLStack160);
  fVar5 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar2,fVar3,fVar5,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar6 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    FUN_71000140b0(aLStack160,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,&DAT_71000142c0);
  lib::L2CValue::operator_(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SpecialHiThrow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

