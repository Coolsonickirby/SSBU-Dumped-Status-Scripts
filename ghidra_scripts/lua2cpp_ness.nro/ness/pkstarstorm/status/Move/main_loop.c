
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessPkstarstorm::status::Move_main_loop
          (L2CWeaponNessPkstarstorm *this,L2CValue *return_value)

{
  int iVar1;
  float *pfVar2;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar2);
  lib::L2CValue::L2CValue(aLStack144,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar2[2]);
  FUN_7100022a10(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_NESS_PK_STARSTORM_INSTANCE_WORK_ID_FLOAT_MOVE_DEG);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,fVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,fVar3);
  uVar4 = lib::L2CValue::as_number(this_00);
  uVar5 = lib::L2CValue::as_number(this_01);
  uVar6 = lib::L2CValue::as_number(this_02);
  local_60 = CONCAT44(uVar5,uVar4);
  uStack88 = (ulong)uVar6;
  fVar3 = (float)lib::L2CValue::as_number(aLStack208);
  fVar3 = (float)app::GroundUtility::get_degree_gravity((Vector3f *)&local_60,fVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::operator_(aLStack176,aLStack192);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack208);
  uVar5 = lib::L2CValue::as_number(aLStack224);
  uVar6 = lib::L2CValue::as_number(aLStack240);
  local_60 = CONCAT44(uVar5,uVar4);
  uStack88 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

