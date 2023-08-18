
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialHiRush_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  L2CValue *this_01;
  L2CValue *this_02;
  ulong *puVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong auStack208 [2];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  if ((bVar1 & 1U) != 0) {
    iVar3 = 1;
LAB_7100017600:
    lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
    return;
  }
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)auStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((uVar5 & 1) != 0) {
      FUN_71000164c0(auStack208,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack208,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_USE_LANDING_SPEED_MUL
                  );
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_LANDING)
        ;
        lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        puVar8 = auStack208;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack208,false);
        FUN_7100016820(this,auStack208);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        puVar8 = &local_60;
      }
      lib::L2CValue::_L2CValue((L2CValue *)puVar8);
      iVar3 = 0;
      goto LAB_7100017600;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,0xabf865e4a);
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_7100002e50(aLStack112,this,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_SPECIAL_HI_INT_STATUS_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,iVar3);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe70d06243);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,false);
    FUN_7100002e50(auStack208,this,&local_60,auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack208,pLVar4);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,false);
      bVar2 = lib::L2CValue::as_bool(aLStack224);
      app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack224);
    }
    FUN_7100016b60(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    puVar8 = auStack208;
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)auStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack208,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_LANDING);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100017ba8;
    }
    pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,*pfVar6);
    lib::L2CValue::L2CValue(aLStack192,pfVar6[1]);
    lib::L2CValue::L2CValue(aLStack176,pfVar6[2]);
    FUN_7100016aa0(auStack160,this,auStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0x156e30ca0c);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack224,fVar9);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x162d277af);
    lib::L2CValue::L2CValue(aLStack256,true);
    uVar5 = lib::L2CValue::as_number(pLVar4);
    lVar11 = lib::L2CValue::as_number(this_01);
    uVar10 = lib::L2CValue::as_number(this_02);
    local_60 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar10;
    fVar9 = (float)lib::L2CValue::as_number(aLStack224);
    bVar2 = lib::L2CValue::as_bool(aLStack256);
    fVar9 = (float)app::lua_bind::GroundModule__get_distance_to_floor_impl
                             (this->moduleAccessor,(Vector3f *)&local_60,fVar9,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack240,fVar9);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
LAB_7100017b48:
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
      if ((bVar1 & 1U) == 0) goto LAB_7100017b48;
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
    puVar8 = auStack160;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar8);
LAB_7100017ba8:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

