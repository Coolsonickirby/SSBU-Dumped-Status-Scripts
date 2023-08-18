
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHiEnd_pre(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  SituationKind SVar5;
  int iVar6;
  uint uVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  Hash40 HVar14;
  float fVar15;
  long lVar16;
  uint in_stack_fffffffffffffe64;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_UNIQ);
  lib::L2CValue::L2CValue(aLStack272,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack288,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
  lib::L2CValue::L2CValue(aLStack304,true);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLAG);
  lib::L2CValue::L2CValue(aLStack336,FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_INT);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_WORK_KEEP_FLAG_ALL_FLOAT);
  lib::L2CValue::L2CValue(aLStack368,0);
  SVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  iVar6 = lib::L2CValue::as_integer(aLStack256);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  GVar8 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = lib::L2CValue::as_bool(aLStack304);
  iVar9 = lib::L2CValue::as_integer(aLStack320);
  iVar10 = lib::L2CValue::as_integer(aLStack336);
  iVar11 = lib::L2CValue::as_integer(aLStack352);
  lib::L2CValue::as_integer(aLStack368);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar5,iVar6,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
             in_stack_fffffffffffffe64);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TREADED_KIND_NO_REAC);
  lib::L2CValue::L2CValue(aLStack272,false);
  lib::L2CValue::L2CValue(aLStack288,false);
  lib::L2CValue::L2CValue(aLStack304,false);
  lib::L2CValue::L2CValue
            (aLStack320,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_HI |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_HI);
  lib::L2CValue::L2CValue(aLStack368,0);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
  iVar6 = lib::L2CValue::as_integer(aLStack256);
  bVar2 = lib::L2CValue::as_bool(aLStack272);
  bVar3 = lib::L2CValue::as_bool(aLStack288);
  bVar4 = lib::L2CValue::as_bool(aLStack304);
  uVar13 = lib::L2CValue::as_integer(aLStack320);
  uVar7 = lib::L2CValue::as_integer(aLStack336);
  uVar12 = lib::L2CValue::as_integer(aLStack352);
  lib::L2CValue::as_integer(aLStack368);
  app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),iVar6,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
             (bool)(bVar4 & 1),uVar13,uVar7,uVar12,in_stack_fffffffffffffe64);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X)
  ;
  iVar6 = lib::L2CValue::as_integer(aLStack256);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar15);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Y)
  ;
  iVar6 = lib::L2CValue::as_integer(aLStack256);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar15);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Z)
  ;
  iVar6 = lib::L2CValue::as_integer(aLStack256);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar15);
  lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,0x31d39a761);
  HVar14 = lib::L2CValue::as_hash(aLStack256);
  uVar13 = lib::L2CValue::as_number(aLStack160);
  lVar16 = lib::L2CValue::as_number(aLStack208);
  uVar7 = lib::L2CValue::as_number(aLStack240);
  local_90 = uVar13 & 0xffffffff | lVar16 << 0x20;
  uStack136 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar14,(Vector3f *)&local_90,0,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::operator_(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,10.0);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::operator_(aLStack176,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::operator_(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,10.0);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::operator_(aLStack192,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::operator_(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,10.0);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::operator_(aLStack224,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_X);
  fVar15 = (float)lib::L2CValue::as_number(aLStack256);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_Y);
  fVar15 = (float)lib::L2CValue::as_number(aLStack256);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_Z);
  fVar15 = (float)lib::L2CValue::as_number(aLStack256);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

