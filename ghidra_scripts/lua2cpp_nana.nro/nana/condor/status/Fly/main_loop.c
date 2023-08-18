
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNanaCondor::status::Fly_main_loop(L2CWeaponNanaCondor *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  L2CTable *this_00;
  L2CValue *pLVar10;
  L2CValue *this_01;
  L2CValue *this_02;
  ulong uVar11;
  Hash40 HVar12;
  float fVar13;
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack280,_WEAPON_POPO_CONDOR_INSTANCE_WORK_ID_FLAG_NO_TURN);
  iVar5 = lib::L2CValue::as_integer(aLStack280);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack200,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack200);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack280);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack136,(L2CValue *)&FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_FLOAT_UP_Z)
    ;
    FUN_71000218a0(aLStack120,this,aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::L2CValue(aLStack200,false);
    uVar8 = lib::L2CValue::operator__(aLStack120,aLStack200);
    lib::L2CValue::_L2CValue(aLStack200);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_POPO_LINK_NO_CONDOR);
      iVar5 = lib::L2CValue::as_integer(aLStack152);
      bVar3 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack280,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack200,false);
      uVar8 = lib::L2CValue::operator__(aLStack280,aLStack200);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack152,_WEAPON_POPO_CONDOR_STATUS_LOOP_WORK_INT_TURN_COUNTER);
        iVar5 = lib::L2CValue::as_integer(aLStack152);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack280,iVar5);
        lib::L2CValue::L2CValue(aLStack200,0);
        uVar8 = lib::L2CValue::operator__(aLStack280,aLStack200);
        lib::L2CValue::_L2CValue(aLStack200);
        lib::L2CValue::_L2CValue(aLStack280);
        lib::L2CValue::_L2CValue(aLStack152);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack200,_WEAPON_POPO_CONDOR_STATUS_LOOP_WORK_INT_TURN_COUNTER);
          iVar5 = lib::L2CValue::as_integer(aLStack200);
          app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar5);
          lVar2 = -0xb8;
        }
        else {
          pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack200,*pfVar9);
          lib::L2CValue::L2CValue(aLStack184,pfVar9[1]);
          lib::L2CValue::L2CValue(aLStack168,pfVar9[2]);
          FUN_710000b240(aLStack152,this,aLStack200);
          lib::L2CValue::_L2CValue(aLStack168);
          lib::L2CValue::_L2CValue(aLStack184);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::L2CValue(aLStack280,_WEAPON_POPO_CONDOR_INSTANCE_WORK_ID_INT_OWNER_ID);
          iVar5 = lib::L2CValue::as_integer(aLStack280);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack216,iVar5);
          lib::L2CValue::_L2CValue(aLStack280);
          uVar6 = lib::L2CValue::as_integer(aLStack216);
          bVar3 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                            (FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_FAILURE_INT,uVar6);
          lib::L2CValue::L2CValue(aLStack280,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack280);
          lib::L2CValue::_L2CValue(aLStack280);
          if ((bVar4 & 1U) != 0) {
            this_00 = (L2CTable *)operator_new(0x48);
            lib::L2CTable::L2CTable(this_00,0);
            lib::L2CValue::L2CValue(aLStack232,this_00);
            pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x18cdc1683);
            lib::L2CValue::L2CValue(aLStack280,0.0);
            lib::L2CValue::operator_(pLVar10,aLStack280);
            lib::L2CValue::_L2CValue(aLStack280);
            pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x1fbdb2615);
            lib::L2CValue::L2CValue(aLStack280,0.0);
            lib::L2CValue::operator_(pLVar10,aLStack280);
            lib::L2CValue::_L2CValue(aLStack280);
            pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x162d277af);
            lib::L2CValue::L2CValue(aLStack280,0.0);
            lib::L2CValue::operator_(pLVar10,aLStack280);
            lib::L2CValue::_L2CValue(aLStack280);
            pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x18cdc1683);
            this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x1fbdb2615);
            this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x162d277af);
            uVar6 = lib::L2CValue::as_integer(aLStack216);
            pfVar9 = (float *)app::sv_battle_object::pos(uVar6);
            lib::L2CValue::L2CValue(aLStack280,*pfVar9);
            lib::L2CValue::L2CValue(aLStack264,pfVar9[1]);
            lib::L2CValue::L2CValue(aLStack248,pfVar9[2]);
            lib::L2CValue::operator_(pLVar10,aLStack280);
            lib::L2CValue::operator_(this_01,aLStack264);
            lib::L2CValue::operator_(this_02,aLStack248);
            lib::L2CValue::_L2CValue(aLStack248);
            lib::L2CValue::_L2CValue(aLStack264);
            lib::L2CValue::_L2CValue(aLStack280);
            lib::L2CValue::operator_(aLStack152,aLStack232);
            lib::L2CValue::L2CValue(aLStack328,aLStack296);
            lua2cpp::L2CFighterBase::Vector3__length(this,(L2CValue)0xb8);
            lib::L2CValue::_L2CValue(aLStack328);
            lib::L2CValue::L2CValue(aLStack376,0xcb459fbc9);
            lib::L2CValue::L2CValue(aLStack392,0x1a53681d48);
            uVar8 = lib::L2CValue::as_integer(aLStack376);
            uVar11 = lib::L2CValue::as_integer(aLStack392);
            fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar8,uVar11);
            lib::L2CValue::L2CValue(aLStack360,fVar13);
            lib::L2CValue::L2CValue(aLStack280,10.0);
            lib::L2CValue::operator_(aLStack360,aLStack280);
            lib::L2CValue::_L2CValue(aLStack280);
            lib::L2CValue::_L2CValue(aLStack360);
            lib::L2CValue::_L2CValue(aLStack392);
            lib::L2CValue::_L2CValue(aLStack376);
            uVar8 = lib::L2CValue::operator_(aLStack312,aLStack344);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack280,0xcb459fbc9);
              lib::L2CValue::L2CValue(aLStack376,0x13851560c1);
              uVar8 = lib::L2CValue::as_integer(aLStack280);
              uVar11 = lib::L2CValue::as_integer(aLStack376);
              fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar8,uVar11);
              lib::L2CValue::L2CValue(aLStack360,fVar13);
              lib::L2CValue::_L2CValue(aLStack376);
              lib::L2CValue::_L2CValue(aLStack280);
              lib::L2CValue::L2CValue(aLStack408,0x66933a7e6);
              HVar12 = lib::L2CValue::as_hash(aLStack408);
              fVar13 = (float)app::sv_math::randf(HVar12,1.0);
              lib::L2CValue::L2CValue(aLStack392,fVar13);
              lib::L2CValue::L2CValue(aLStack280,100.0);
              lib::L2CValue::operator_(aLStack392,aLStack280);
              lib::L2CValue::_L2CValue(aLStack280);
              lib::L2CValue::_L2CValue(aLStack392);
              lib::L2CValue::_L2CValue(aLStack408);
              uVar8 = lib::L2CValue::operator__(aLStack376,aLStack360);
              if ((uVar8 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack280,true);
                lib::L2CValue::operator_(aLStack120,aLStack280);
                lib::L2CValue::_L2CValue(aLStack280);
              }
              lib::L2CValue::L2CValue(aLStack392,0xcb459fbc9);
              lib::L2CValue::L2CValue(aLStack408,0x12223de4e8);
              uVar8 = lib::L2CValue::as_integer(aLStack392);
              uVar11 = lib::L2CValue::as_integer(aLStack408);
              iVar5 = app::lua_bind::WorkModule__get_param_int_impl
                                (this->moduleAccessor,uVar8,uVar11);
              lib::L2CValue::L2CValue(aLStack280,iVar5);
              lib::L2CValue::L2CValue
                        (aLStack424,_WEAPON_POPO_CONDOR_STATUS_LOOP_WORK_INT_TURN_COUNTER);
              iVar5 = lib::L2CValue::as_integer(aLStack280);
              iVar7 = lib::L2CValue::as_integer(aLStack424);
              app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar7);
              lib::L2CValue::_L2CValue(aLStack424);
              lib::L2CValue::_L2CValue(aLStack280);
              lib::L2CValue::_L2CValue(aLStack408);
              lib::L2CValue::_L2CValue(aLStack392);
              lib::L2CValue::_L2CValue(aLStack376);
              lib::L2CValue::_L2CValue(aLStack360);
            }
            lib::L2CValue::_L2CValue(aLStack344);
            lib::L2CValue::_L2CValue(aLStack312);
            lib::L2CValue::_L2CValue(aLStack296);
            lib::L2CValue::_L2CValue(aLStack232);
          }
          lib::L2CValue::_L2CValue(aLStack216);
          lVar2 = -0x88;
        }
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
      }
    }
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack120);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack280,_WEAPON_POPO_CONDOR_STATUS_KIND_TURN);
      lib::L2CValue::L2CValue(aLStack152,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe8,(L2CValue)(cVar1 + 'x'));
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack120);
  }
  else {
    lib::L2CValue::L2CValue(aLStack200,_WEAPON_POPO_CONDOR_STATUS_KIND_MOVE_END);
    lib::L2CValue::L2CValue(aLStack280,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + 'H'),(L2CValue)0xe8);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

