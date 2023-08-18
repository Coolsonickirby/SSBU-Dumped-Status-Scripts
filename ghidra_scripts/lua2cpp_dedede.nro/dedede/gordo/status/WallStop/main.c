
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDededeGordo::status::WallStop_main(L2CWeaponDededeGordo *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *this_00;
  uint uVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_HIT_STATUS_OFF);
  HVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack112,0xbbd93727c);
  lib::L2CValue::L2CValue(aLStack128,0xea7d77365);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xbbd93727c);
  lib::L2CValue::L2CValue(aLStack128,0x15d69677de);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,0xac5f6086f);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  HVar7 = lib::L2CValue::as_hash(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  uVar5 = lib::L2CValue::as_number(aLStack160);
  uVar8 = lib::L2CValue::as_number(aLStack176);
  local_60 = uVar5 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack88 = 0;
  app::lua_bind::ShakeModule__req_impl
            (this->moduleAccessor,HVar7,iVar3,(bool)(bVar1 & 1),(Vector2f *)&local_60,1.0,0.0,false,
             false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    FUN_71000385d0(aLStack128,this);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&LAB_71000387d0);
  lib::L2CValue::operator_(this_00,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
  lib::L2CValue::L2CValue(aLStack144,0x97ffb6297);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar7 = lib::L2CValue::as_hash(aLStack144);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar10 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,WallStop_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

