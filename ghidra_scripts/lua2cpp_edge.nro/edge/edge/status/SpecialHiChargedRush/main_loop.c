
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialHiChargedRush_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  L2CValue *this_01;
  L2CValue *this_02;
  float fVar9;
  uint uVar10;
  long lVar11;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar1 & 1U) != 0) {
    iVar4 = 1;
LAB_7100015ce0:
    lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
    return;
  }
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar6 & 1) != 0) {
      FUN_71000164c0(aLStack208,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack208,true);
        FUN_7100016820(this,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        iVar4 = 0;
        goto LAB_7100015ce0;
      }
      lib::L2CValue::L2CValue(aLStack208,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar3 = lib::L2CValue::as_integer(aLStack208);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack208);
    }
  }
  lib::L2CValue::L2CValue(aLStack128,0xabf865e4a);
  lib::L2CValue::L2CValue(aLStack144,true);
  FUN_7100002e50(aLStack112,this,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_SPECIAL_HI_INT_STATUS_FRAME);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack208,iVar4);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe70d06243);
    lib::L2CValue::L2CValue(aLStack160,true);
    FUN_7100002e50(aLStack208,this,&local_60,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    uVar6 = lib::L2CValue::operator__(aLStack208,pLVar5);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,false);
      bVar2 = lib::L2CValue::as_bool(aLStack224);
      app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack224);
    }
    FUN_7100016b60(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    pLVar5 = aLStack208;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_LANDING);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000162bc;
    }
    pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,*pfVar7);
    lib::L2CValue::L2CValue(aLStack192,pfVar7[1]);
    lib::L2CValue::L2CValue(aLStack176,pfVar7[2]);
    FUN_7100016aa0(aLStack160,this,aLStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0x156e30ca0c);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack224,fVar9);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    lib::L2CValue::L2CValue(aLStack256,true);
    uVar6 = lib::L2CValue::as_number(pLVar5);
    lVar11 = lib::L2CValue::as_number(this_01);
    uVar10 = lib::L2CValue::as_number(this_02);
    local_60 = uVar6 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar10;
    fVar9 = (float)lib::L2CValue::as_number(aLStack224);
    bVar2 = lib::L2CValue::as_bool(aLStack256);
    fVar9 = (float)app::lua_bind::GroundModule__get_distance_to_floor_impl
                             (this->moduleAccessor,(Vector3f *)&local_60,fVar9,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack240,fVar9);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
LAB_710001625c:
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_END);
      lib::L2CValue::L2CValue(aLStack256,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,false);
      bVar2 = lib::L2CValue::as_bool(aLStack256);
      bVar2 = app::lua_bind::GroundModule__attach_ground_impl
                        (this->moduleAccessor,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((bVar1 & 1U) == 0) goto LAB_710001625c;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_LANDING);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar5 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_71000162bc:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

