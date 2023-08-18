
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntClay::status::Hit_main(L2CWeaponDuckhuntClay *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  L2CValue *this_00;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
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
  
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_WALL_HIT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_REFLECTED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x35ad22641);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      fVar7 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb3f7b602e);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      fVar7 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x8fb7fb57b);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  fVar6 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar6 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar6 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack208,0x133f4ff59e);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,1.0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,-1);
  HVar5 = lib::L2CValue::as_hash(aLStack208);
  uVar9 = lib::L2CValue::as_number(aLStack176);
  lVar10 = lib::L2CValue::as_number(aLStack128);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  local_60 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack88 = (ulong)uVar8;
  uVar9 = lib::L2CValue::as_number(aLStack224);
  lVar10 = lib::L2CValue::as_number(aLStack240);
  uVar8 = lib::L2CValue::as_number(aLStack256);
  local_70 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack104 = (ulong)uVar8;
  fVar6 = (float)lib::L2CValue::as_number(aLStack272);
  uVar8 = lib::L2CValue::as_integer(aLStack288);
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  uVar8 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar5,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar6,
                     uVar8,iVar3,false,0);
  lib::L2CValue::L2CValue(aLStack192,uVar8);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_BROKEN_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x18);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack320);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack320);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar9 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100020c40(&local_70,this,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_7100020db0);
  lib::L2CValue::operator_(this_00,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Hit_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack320);
  return;
}

