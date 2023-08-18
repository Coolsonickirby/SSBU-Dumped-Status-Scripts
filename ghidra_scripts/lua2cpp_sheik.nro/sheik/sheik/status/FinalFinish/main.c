
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::FinalFinish_main(L2CFighterSheik *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  float *pfVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  L2CValue *this_00;
  L2CValue *pLVar18;
  Hash40 HVar19;
  float fVar20;
  float fVar21;
  long lVar22;
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  undefined auStack800 [32];
  undefined auStack768 [32];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  ulong local_2b0;
  ulong uStack680;
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [24];
  L2CValue aLStack600 [16];
  L2CValue aLStack584 [16];
  L2CValue aLStack568 [16];
  L2CValue aLStack552 [16];
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
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
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_2b0,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_2b0);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2b0,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2b0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack136,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2b0,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_TARGET_OBJECT_ID_0);
  lib::L2CValue::operator_((L2CValue *)&local_2b0,aLStack136);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2b0,1);
  lib::L2CValue::operator_(aLStack296,(L2CValue *)&local_2b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
  iVar3 = lib::L2CValue::as_integer(aLStack232);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack152,iVar3);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack296);
  uVar4 = lib::L2CValue::as_integer(aLStack152);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack232,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack232);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2b0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
    lib::L2CValue::_L2CValue(aLStack232);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack152);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack296,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack296);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
    lib::L2CValue::_L2CValue(aLStack232);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack152);
      pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack168,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack168,pvVar5);
      }
      pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack232,*pfVar6);
      lib::L2CValue::L2CValue(aLStack216,pfVar6[1]);
      lib::L2CValue::L2CValue(aLStack200,pfVar6[2]);
      FUN_7100019a20(aLStack184,this,aLStack232);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::_L2CValue(aLStack232);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
      pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack296,*pfVar6);
      lib::L2CValue::L2CValue(aLStack280,pfVar6[1]);
      lib::L2CValue::L2CValue(aLStack264,pfVar6[2]);
      FUN_7100019a20(aLStack248,this,aLStack296);
      lib::L2CValue::_L2CValue(aLStack264);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::_L2CValue(aLStack296);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
      fVar20 = (float)app::lua_bind::PostureModule__lr_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack312,fVar20);
      lib::L2CValue::L2CValue((L2CValue *)&local_2b0,_FIGHTER_INSTANCE_WORK_ID_FLOAT_INIT_SCALE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2b0);
      fVar20 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack328,fVar20);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
      lib::L2CValue::operator_(aLStack312);
      lib::L2CValue::operator_(aLStack360,aLStack328);
      lib::L2CValue::L2CValue(aLStack392,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack408,0x11dcfd33f0);
      uVar8 = lib::L2CValue::as_integer(aLStack392);
      uVar9 = lib::L2CValue::as_integer(aLStack408);
      fVar20 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack376,fVar20);
      lib::L2CValue::operator_((L2CValue *)&local_2b0,aLStack376);
      lib::L2CValue::_L2CValue(aLStack376);
      lib::L2CValue::_L2CValue(aLStack408);
      lib::L2CValue::_L2CValue(aLStack392);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
      lib::L2CValue::_L2CValue(aLStack360);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
      lib::L2CValue::operator_(pLVar10,aLStack344);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack392,pLVar10);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x88,(L2CValue)0x78);
      lib::L2CValue::_L2CValue(aLStack392);
      lib::L2CValue::_L2CValue(aLStack376);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack424,pLVar10);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack440,pLVar10);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x58,(L2CValue)0x48);
      lib::L2CValue::_L2CValue(aLStack440);
      lib::L2CValue::_L2CValue(aLStack424);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
      lib::L2CValue::operator_(pLVar10,pLVar11);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar10,pLVar11);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x28,(L2CValue)0x18);
      lib::L2CValue::_L2CValue(aLStack488);
      lib::L2CValue::_L2CValue(aLStack472);
      lib::L2CValue::L2CValue(aLStack520,0.0);
      lib::L2CValue::L2CValue(aLStack536,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf8,(L2CValue)0xe8);
      lib::L2CValue::_L2CValue(aLStack536);
      lib::L2CValue::_L2CValue(aLStack520);
      lib::L2CValue::L2CValue(aLStack568,0.0);
      lib::L2CValue::L2CValue(aLStack584,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc8,(L2CValue)0xb8);
      lib::L2CValue::_L2CValue(aLStack584);
      lib::L2CValue::_L2CValue(aLStack568);
      lib::L2CValue::L2CValue(aLStack600,false);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack504,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack504,0x1fbdb2615);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack552,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack552,0x1fbdb2615);
      uVar14 = lib::L2CValue::operator__(aLStack408,0x18cdc1683);
      uVar15 = lib::L2CValue::operator__(aLStack408,0x1fbdb2615);
      uVar16 = lib::L2CValue::operator__(aLStack456,0x18cdc1683);
      uVar17 = lib::L2CValue::operator__(aLStack456,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack704,0.0);
      lib::L2CValue::L2CValue(aLStack720,0.0);
      lib::L2CValue::L2CValue(aLStack736,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack768 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack768,false);
      FUN_7100019ae0(&local_2b0,this,uVar14,uVar15,uVar16,uVar17,aLStack704,aLStack720,aLStack736,
                     auStack768 + 0x10,auStack768);
      lib::L2CValue::operator_(aLStack600,(L2CValue *)&local_2b0);
      lib::L2CValue::operator_(pLVar10,aLStack672);
      lib::L2CValue::operator_(pLVar11,aLStack656);
      lib::L2CValue::operator_(pLVar12,aLStack640);
      lib::L2CValue::operator_(pLVar13,aLStack624);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::_L2CValue(aLStack640);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack768);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack768 + 0x10));
      lib::L2CValue::_L2CValue(aLStack736);
      lib::L2CValue::_L2CValue(aLStack720);
      lib::L2CValue::_L2CValue(aLStack704);
      lib::L2CValue::L2CValue(aLStack720,0.0);
      lib::L2CValue::L2CValue(aLStack736,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack736);
      lib::L2CValue::_L2CValue(aLStack720);
      lib::L2CValue::L2CValue((L2CValue *)(auStack768 + 0x10),false);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack704,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack704,0x1fbdb2615);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack552,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack552,0x1fbdb2615);
      uVar14 = lib::L2CValue::operator__(aLStack184,0x18cdc1683);
      uVar15 = lib::L2CValue::operator__(aLStack408,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
      pLVar18 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
      lib::L2CValue::operator_(this_00,pLVar18);
      uVar16 = lib::L2CValue::operator__(aLStack456,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)(auStack800 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack800,0.0);
      lib::L2CValue::L2CValue(aLStack816,0.0);
      lib::L2CValue::L2CValue(aLStack832,0.0);
      lib::L2CValue::L2CValue(aLStack848,false);
      FUN_7100019ae0(&local_2b0,this,uVar14,uVar15,auStack768,uVar16,auStack800 + 0x10,auStack800,
                     aLStack816,aLStack832,aLStack848);
      lib::L2CValue::operator_((L2CValue *)(auStack768 + 0x10),(L2CValue *)&local_2b0);
      lib::L2CValue::operator_(pLVar10,aLStack672);
      lib::L2CValue::operator_(pLVar11,aLStack656);
      lib::L2CValue::operator_(pLVar12,aLStack640);
      lib::L2CValue::operator_(pLVar13,aLStack624);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::_L2CValue(aLStack640);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
      lib::L2CValue::_L2CValue(aLStack848);
      lib::L2CValue::_L2CValue(aLStack832);
      lib::L2CValue::_L2CValue(aLStack816);
      lib::L2CValue::_L2CValue((L2CValue *)auStack800);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack800 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack768);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack768 + 0x10));
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_2b0,false);
        uVar8 = lib::L2CValue::operator__(aLStack600,(L2CValue *)&local_2b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
        if ((uVar8 & 1) == 0) {
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack704,0x18cdc1683);
          lib::L2CValue::operator_(pLVar10,pLVar11);
          lib::L2CAgent::math_abs((L2CAgent *)auStack768,pLVar11);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack504,0x18cdc1683);
          lib::L2CValue::operator_(pLVar10,pLVar11);
          lib::L2CAgent::math_abs((L2CAgent *)auStack800,pLVar11);
          uVar8 = lib::L2CValue::operator_((L2CValue *)&local_2b0,(L2CValue *)(auStack800 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack800 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack800);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
          lib::L2CValue::_L2CValue((L2CValue *)auStack768);
          if ((uVar8 & 1) != 0) {
            pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack704,0x18cdc1683);
            pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack504,0x18cdc1683);
            lib::L2CValue::operator_(pLVar11,pLVar10);
          }
        }
        else {
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack704,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack552,0x18cdc1683);
          lib::L2CValue::L2CValue((L2CValue *)&local_2b0,0.5);
          lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_2b0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
          lib::L2CValue::operator_(pLVar10,(L2CValue *)(auStack800 + 0x10));
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
          lib::L2CValue::operator_(pLVar10,(L2CValue *)auStack768);
          lib::L2CValue::_L2CValue((L2CValue *)auStack768);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack800 + 0x10));
        }
      }
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack600);
      if ((bVar2 & 1U) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack248,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack504,0x18cdc1683);
        lib::L2CValue::operator_(pLVar10,pLVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_2b0,2.0);
        lib::L2CValue::operator_((L2CValue *)(auStack800 + 0x10),(L2CValue *)&local_2b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
        lib::L2CValue::operator_(pLVar10,(L2CValue *)auStack768);
        lib::L2CValue::_L2CValue((L2CValue *)auStack768);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack800 + 0x10));
      }
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x1fbdb2615);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x162d277af);
      uVar8 = lib::L2CValue::as_number(pLVar10);
      lVar22 = lib::L2CValue::as_number(pLVar11);
      uVar4 = lib::L2CValue::as_number(pLVar12);
      local_2b0 = uVar8 & 0xffffffff | lVar22 << 0x20;
      uStack680 = (ulong)uVar4;
      app::lua_bind::PostureModule__init_pos_impl
                (this->moduleAccessor,(Vector3f *)&local_2b0,true,true);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack768 + 0x10));
      lib::L2CValue::_L2CValue(aLStack704);
      lib::L2CValue::_L2CValue(aLStack600);
      lib::L2CValue::_L2CValue(aLStack552);
      lib::L2CValue::_L2CValue(aLStack504);
      lib::L2CValue::_L2CValue(aLStack456);
      lib::L2CValue::_L2CValue(aLStack408);
      lib::L2CValue::_L2CValue(aLStack360);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::_L2CValue(aLStack328);
      lib::L2CValue::_L2CValue(aLStack312);
      lib::L2CValue::_L2CValue(aLStack248);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack168);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_2b0,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2b0);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2b0,0xcd0c7600f);
  lib::L2CValue::L2CValue(aLStack168,0.0);
  lib::L2CValue::L2CValue(aLStack184,1.0);
  lib::L2CValue::L2CValue(aLStack248,false);
  HVar19 = lib::L2CValue::as_hash((L2CValue *)&local_2b0);
  fVar20 = (float)lib::L2CValue::as_number(aLStack168);
  fVar21 = (float)lib::L2CValue::as_number(aLStack184);
  bVar1 = lib::L2CValue::as_bool(aLStack248);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar19,fVar20,fVar21,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2b0,FinalFinish_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2b0);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

