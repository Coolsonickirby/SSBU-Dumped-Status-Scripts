
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiiswordsmanWave::status::Fly_main(L2CWeaponMiiswordsmanWave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this_00;
  float fVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  int in_stack_fffffffffffffea4;
  undefined in_stack_fffffffffffffeac;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x3538a83b3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack144,0x1b08716364);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_INT_EFFECT_TYPE);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_INT_EFFECT_TYPE);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) goto LAB_71000447fc;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1e1bf7bab7);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1d427f4a91);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_71000447fc:
  lib::L2CValue::L2CValue(aLStack176,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::operator_(aLStack128);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  HVar3 = lib::L2CValue::as_hash(aLStack144);
  HVar5 = lib::L2CValue::as_hash(aLStack176);
  uVar4 = lib::L2CValue::as_number(aLStack192);
  lVar9 = lib::L2CValue::as_number(aLStack208);
  uVar8 = lib::L2CValue::as_number(aLStack224);
  local_60 = uVar4 & 0xffffffff | lVar9 << 0x20;
  uStack88 = (ulong)uVar8;
  uVar4 = lib::L2CValue::as_number(aLStack240);
  lVar9 = lib::L2CValue::as_number(aLStack256);
  uVar8 = lib::L2CValue::as_number(aLStack272);
  local_70 = uVar4 & 0xffffffff | lVar9 << 0x20;
  uStack104 = (ulong)uVar8;
  uVar8 = app::lua_bind::EffectModule__req_follow_impl
                    (this->moduleAccessor,HVar3,HVar5,(Vector3f *)&local_60,(Vector3f *)&local_70,
                     1.0,false,0,0,-1,in_stack_fffffffffffffea4,0,(bool)in_stack_fffffffffffffeac,
                     false);
  lib::L2CValue::L2CValue(aLStack160,uVar8);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  fVar6 = (float)app::lua_bind::PostureModule__base_scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_MIISWORDSMAN_WAVE_INSTANCE_WORK_ID_FLOAT_INIT_SCALE);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    FUN_7100044d20(aLStack176,this,aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_7100044f20);
  lib::L2CValue::operator_(this_00,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

