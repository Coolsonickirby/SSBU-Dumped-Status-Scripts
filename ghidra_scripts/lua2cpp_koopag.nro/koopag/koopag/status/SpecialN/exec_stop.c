
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialN_exec_stop(L2CFighterKoopag *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar1);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KOOPA_STATUS_BREATH_STEP_LOOP);
  uVar2 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KOOPA_STATUS_BREATH_WORK_FLOAT_GENE_ANGLE);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_HEAD_NODE);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,lVar3);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    uVar2 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack224,0x97625f199);
      uVar2 = lib::L2CValue::as_integer(aLStack208);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack192);
      lib::L2CValue::operator_(aLStack240,aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,45.0);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack144,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      HVar5 = lib::L2CValue::as_hash(aLStack128);
      uVar7 = lib::L2CValue::as_number(aLStack160);
      uVar8 = lib::L2CValue::as_number(aLStack176);
      uVar9 = lib::L2CValue::as_number(aLStack144);
      local_50 = CONCAT44(uVar8,uVar7);
      uStack72 = (ulong)uVar9;
      app::lua_bind::ModelModule__set_joint_rotate_impl
                (this->moduleAccessor,HVar5,(Vector3f *)&local_50,0,0);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

