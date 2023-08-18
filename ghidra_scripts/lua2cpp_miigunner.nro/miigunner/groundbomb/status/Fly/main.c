
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiigunnerGroundbomb::status::Fly_main
          (L2CWeaponMiigunnerGroundbomb *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  HitStatus HVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  float fVar7;
  float fVar8;
  ulong uVar9;
  long lVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,90.0);
  lib::L2CValue::L2CValue(aLStack144,0x66933a7e6);
  lib::L2CValue::L2CValue(aLStack160,0x5a);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  uVar3 = app::sv_math::rand(HVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack128,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-0x2d);
  lib::L2CValue::operator_((L2CValue *)&local_50,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_RANDOM_ROT_Z);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_RANDOM_ROT_Z);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar9 = lib::L2CValue::as_number(aLStack128);
  lVar10 = lib::L2CValue::as_number(aLStack96);
  uVar3 = lib::L2CValue::as_number(aLStack112);
  local_50 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack72 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_FLASH_START);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x3538a83b3);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_HIT_STATUS_NORMAL);
  HVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar5,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar9 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    FUN_710003ae10(aLStack128,this,aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,&DAT_710003b980);
  lib::L2CValue::operator_(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

