
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::SpecialLwKick_main(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  L2CValue *pLVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined8 uVar13;
  float fVar14;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack224,0x13911a4dd4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  fVar14 = 0.0;
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack224);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack224,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  uVar2 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack272,0xe22a27e23);
  uVar6 = lib::L2CValue::as_integer(aLStack256);
  uVar7 = lib::L2CValue::as_integer(aLStack272);
  lVar8 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack240,lVar8);
  lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack320,0x1120d05587);
  uVar6 = lib::L2CValue::as_integer(aLStack304);
  uVar7 = lib::L2CValue::as_integer(aLStack320);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack288,fVar10);
  lib::L2CValue::L2CValue(aLStack352,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack368,0x1157d76511);
  uVar6 = lib::L2CValue::as_integer(aLStack352);
  uVar7 = lib::L2CValue::as_integer(aLStack368);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack336,fVar10);
  lib::L2CValue::L2CValue(aLStack400,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack416,0x11cede34ab);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  uVar7 = lib::L2CValue::as_integer(aLStack416);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack384,fVar10);
  HVar5 = lib::L2CValue::as_hash(aLStack240);
  uVar6 = lib::L2CValue::as_number(aLStack288);
  lVar8 = lib::L2CValue::as_number(aLStack336);
  uVar12 = lib::L2CValue::as_number(aLStack384);
  local_70 = uVar6 & 0xffffffff | lVar8 << 0x20;
  uStack104 = (ulong)uVar12;
  uVar13 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                     (this->moduleAccessor,HVar5,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
  lib::L2CValue::L2CValue(aLStack192,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack224);
  lib::L2CValue::L2CValue(aLStack128,aLStack208);
  lib::L2CValue::L2CValue(aLStack144,aLStack192);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_FLOAT_MAP_COLL_OFFSET_X
            );
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_FLOAT_MAP_COLL_OFFSET_Y
            );
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_FLOAT_MAP_COLL_OFFSET_Z
            );
  fVar10 = (float)lib::L2CValue::as_number(aLStack128);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,SpecialLwKick_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

