
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSimonCross::status::Turn_main_loop(L2CWeaponSimonCross *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float *pfVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  code *pcVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float in_register_00005008;
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
  
  lib::L2CValue::L2CValue(aLStack208,_LINK_NO_ARTICLE);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar3,true);
  lib::L2CValue::L2CValue(aLStack128,uVar4);
  lib::L2CValue::_L2CValue(aLStack208);
  uVar4 = app::lua_bind::TeamModule__team_owner_id_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,uVar4);
  uVar5 = lib::L2CValue::operator__(aLStack208,aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar8 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLAG_REFLECT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack208,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100023b80;
      lib::L2CValue::L2CValue(aLStack256,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack112,0x51a36341b);
      lib::L2CValue::L2CValue(aLStack160,true);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      uVar15 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                         (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack208,(float)uVar15);
      lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar15 >> 0x20));
      lib::L2CValue::L2CValue(aLStack176,in_register_00005008);
      FUN_71000030b0(aLStack144,this,aLStack208);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack256,*pfVar7);
      lib::L2CValue::L2CValue(aLStack240,pfVar7[1]);
      lib::L2CValue::L2CValue(aLStack224,pfVar7[2]);
      FUN_71000030b0(aLStack160,this,aLStack256);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      lib::L2CValue::operator_(pLVar8,pLVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar8,pLVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x162d277af);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      lib::L2CValue::operator_(pLVar8,pLVar9);
      fVar12 = (float)lib::L2CValue::as_number(aLStack112);
      fVar13 = (float)lib::L2CValue::as_number(aLStack288);
      fVar14 = (float)lib::L2CValue::as_number(aLStack304);
      fVar12 = (float)app::sv_math::vec3_length(fVar12,fVar13,fVar14);
      lib::L2CValue::L2CValue(aLStack272,fVar12);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack288,9.0);
      uVar5 = lib::L2CValue::operator_(aLStack272,aLStack288);
      if ((uVar5 & 1) != 0) {
        app::LinkEvent::new_l2c_table();
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x105a79305b);
        lib::L2CValue::L2CValue(aLStack112,0x18aebe7bb7);
        lib::L2CValue::operator_(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack336,_LINK_NO_ARTICLE);
        iVar3 = lib::L2CValue::as_integer(aLStack336);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x11f63699bf);
        pcVar10 = (code *)lib::L2CValue::as_pointer(pLVar8);
        plVar11 = (long *)(*pcVar10)();
        app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar11,aLStack304);
        app::lua_bind::LinkModule__send_event_parents_struct_impl
                  (this->moduleAccessor,iVar3,(LinkEvent *)plVar11);
        app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar11);
        lib::L2CValue::L2CValue(aLStack320,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        (**(code **)(*plVar11 + 8))(plVar11);
        lib::L2CValue::operator_(aLStack304,aLStack320);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack336);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x7ad7b88f7);
        bVar2 = lib::L2CValue::operator_cast_to_bool(pLVar8);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack320,0x199c462b5d);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar8 = aLStack320;
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_WEAPON_SIMON_CROSS_STATUS_KIND_HAVED);
          lib::L2CValue::L2CValue(aLStack320,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack320);
          pLVar8 = aLStack112;
        }
        lib::L2CValue::_L2CValue(pLVar8);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        goto LAB_7100023b8c;
      }
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack160);
      pLVar8 = aLStack144;
    }
    lib::L2CValue::_L2CValue(pLVar8);
  }
LAB_7100023b80:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100023b8c:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

