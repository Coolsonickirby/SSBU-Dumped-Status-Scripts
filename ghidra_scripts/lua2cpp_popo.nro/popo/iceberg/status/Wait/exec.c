
void __thiscall
L2CWeaponPopoIceberg::status::Wait_exec(L2CWeaponPopoIceberg *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  L2CAgent *pLVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  L2CValue *pLVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  L2CValue aLStack400 [16];
  ulong local_180;
  ulong uStack376;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined4 local_120 [4];
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
  
  FUN_7100023f60();
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)local_120,0.0);
  uVar1 = lib::L2CValue::operator__(aLStack128,(L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  if ((uVar1 & 1) != 0) goto LAB_7100023c54;
  local_120[0] = app::sv_camera_manager::camera_range();
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_120);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xd6f464cb7);
  lib::L2CValue::L2CValue(aLStack176,0x1ca9d2e894);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)local_120,0.01);
  lib::L2CValue::operator_((L2CValue *)&local_180,(L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)local_120,960.0);
  lib::L2CValue::operator_((L2CValue *)local_120,aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::L2CValue((L2CValue *)local_120,960.0);
  lib::L2CValue::operator_((L2CValue *)local_120,(L2CValue *)&local_180);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::L2CValue((L2CValue *)local_120,960.0);
  lib::L2CValue::operator_((L2CValue *)local_120,aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::L2CValue((L2CValue *)local_120,960.0);
  lib::L2CValue::operator_((L2CValue *)local_120,(L2CValue *)&local_180);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xd6f464cb7);
  lib::L2CValue::L2CValue(aLStack224,0x20c018f0dc);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar2 = lib::L2CValue::as_integer(aLStack224);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)local_120,0.01);
  lib::L2CValue::operator_((L2CValue *)&local_180,(L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  pLVar7 = (L2CValue *)0x5b4ca7514;
  pLVar3 = (L2CAgent *)lib::L2CValue::operator__(aLStack144,0x5b4ca7514);
  lib::L2CAgent::math_abs(pLVar3,pLVar7);
  pLVar7 = (L2CValue *)0x47a67e768;
  pLVar3 = (L2CAgent *)lib::L2CValue::operator__(aLStack144,0x47a67e768);
  lib::L2CAgent::math_abs(pLVar3,pLVar7);
  lib::L2CValue::operator_((L2CValue *)&local_180,(L2CValue *)&local_70);
  lib::L2CValue::operator_((L2CValue *)local_120,aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::operator_(aLStack224,aLStack128);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)local_120);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)local_120,*pfVar4);
  lib::L2CValue::L2CValue(aLStack272,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack256,pfVar4[2]);
  FUN_710000b240(aLStack240,this,local_120);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)local_120);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  lib::L2CValue::operator_(pLVar6,aLStack224);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  uVar1 = lib::L2CValue::as_number(aLStack400);
  lVar10 = lib::L2CValue::as_number(pLVar6);
  uVar9 = lib::L2CValue::as_number(this_00);
  local_70 = uVar1 & 0xffffffff | lVar10 << 0x20;
  uStack104 = (ulong)uVar9;
  uVar11 = app::sv_camera_manager::world_to_screen((Vector3f *)&local_70,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,(float)uVar11);
  lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_180);
  lib::L2CValue::operator_(pLVar5,aLStack368);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::_L2CValue(aLStack400);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  uVar1 = lib::L2CValue::operator_(pLVar7,aLStack192);
  if ((uVar1 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    uVar1 = lib::L2CValue::operator_(aLStack176,pLVar7);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_180,0.0);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_180);
      goto LAB_7100023b38;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_180,0.0);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_180);
LAB_7100023b38:
    lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  lib::L2CValue::operator_(pLVar7,aLStack224);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_180);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  uVar1 = lib::L2CValue::as_number(pLVar7);
  lVar10 = lib::L2CValue::as_number(pLVar5);
  uVar9 = lib::L2CValue::as_number(pLVar6);
  local_180 = uVar1 & 0xffffffff | lVar10 << 0x20;
  uStack376 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_180);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
LAB_7100023c54:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

