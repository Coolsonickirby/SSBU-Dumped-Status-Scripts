
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntCan::status::Explode_main(L2CWeaponDuckhuntCan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  float fVar5;
  float fVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x17f15e35ca);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar4,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x754732c8d);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack144,0x13c0c932b4);
  fVar5 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar5);
  fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar5);
  fVar5 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar5);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,1.0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,-1);
  HVar4 = lib::L2CValue::as_hash(aLStack144);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  lVar9 = lib::L2CValue::as_number(aLStack176);
  uVar7 = lib::L2CValue::as_number(aLStack192);
  local_60 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack88 = (ulong)uVar7;
  uVar8 = lib::L2CValue::as_number(aLStack208);
  lVar9 = lib::L2CValue::as_number(aLStack224);
  uVar7 = lib::L2CValue::as_number(aLStack240);
  local_70 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack104 = (ulong)uVar7;
  fVar5 = (float)lib::L2CValue::as_number(aLStack256);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  iVar2 = lib::L2CValue::as_integer(aLStack288);
  uVar7 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar4,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar5,
                     uVar7,iVar2,false,0);
  lib::L2CValue::L2CValue(aLStack128,uVar7);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_EXPLODE_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x17f633f1d3);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  iVar2 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar4,true,false,false,false,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x10eaa9bff4);
  lib::L2CValue::L2CValue(aLStack144,0);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::ControlModule__set_rumble_impl(this->moduleAccessor,HVar4,iVar2,false,0x50000000);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::HitModule__sleep_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_CAMERA_QUAKE_KIND_M);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::CameraModule__req_quake_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack144,0x23);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar8 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    FUN_7100016fd0(aLStack160,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_7100017140);
  lib::L2CValue::operator_(this_00,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Explode_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

