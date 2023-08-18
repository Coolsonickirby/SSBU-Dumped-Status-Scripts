
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiAirEnd_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  float in_register_00005008;
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
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0x14b4d3384e);
  lib::L2CValue::L2CValue(aLStack128,0x12eeb17698);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack160,true);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  FUN_7100039930(this,aLStack144,aLStack160,aLStack176,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_IS_BLOCKED);
  iVar3 = lib::L2CValue::as_integer(aLStack320);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack320);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack208,0x4a7f3f69c);
    HVar4 = lib::L2CValue::as_hash(aLStack208);
    uVar9 = app::lua_bind::GroundModule__get_shape_data_rhombus_modify_node_offset_impl
                      (this->moduleAccessor,HVar4);
    lib::L2CValue::L2CValue(aLStack272,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack240,in_register_00005008);
    FUN_710000eb70(aLStack224,this,aLStack272);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::operator_(this_00,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue
              (aLStack320,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_MAP_COLL_OFFSET_X);
    fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack368,0x1120d05587);
    uVar5 = lib::L2CValue::as_integer(aLStack352);
    uVar6 = lib::L2CValue::as_integer(aLStack368);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack336,fVar7);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    fVar7 = 0.0;
    lib::L2CValue::L2CValue(aLStack400,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack208);
    uVar5 = lib::L2CValue::as_number(aLStack336);
    lVar10 = lib::L2CValue::as_number(aLStack384);
    uVar8 = lib::L2CValue::as_number(aLStack400);
    local_60 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack88 = (ulong)uVar8;
    uVar9 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                      (this->moduleAccessor,HVar4,(Vector3f *)&local_60);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack288,fVar7);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialHiAirEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

