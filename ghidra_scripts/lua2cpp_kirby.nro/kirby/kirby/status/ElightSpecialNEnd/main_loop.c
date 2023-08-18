
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ElightSpecialNEnd_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  AttackData *pAVar9;
  L2CValue *pLVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  uint uVar14;
  long lVar15;
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  ulong local_90;
  ulong uStack136;
  
  ppBVar12 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
LAB_71001188d0:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) == 0) {
LAB_7100118a10:
      lib::L2CValue::L2CValue(aLStack160,0x915c5de42);
      lib::L2CValue::L2CValue(aLStack176,0xd483c0ed2);
      lib::L2CValue::L2CValue(aLStack208,true);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_ATTACK_RATIO);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack288,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xa82125b6f);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xe724031fb);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      lib::L2CValue::L2CValue(aLStack336,aLStack160);
      lib::L2CValue::L2CValue(aLStack352,aLStack176);
      lib::L2CValue::L2CValue(aLStack368,aLStack208);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
                (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      FUN_710011a200(this);
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLAG_ATTACK_SET);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLAG_ATTACK_SET);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack304,0x15289c83fb);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar8 = lib::L2CValue::as_integer(aLStack304);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack288,iVar3);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack384,0x144cea0629);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar8 = lib::L2CValue::as_integer(aLStack384);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack304,iVar3);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue(aLStack432,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_ATTACK_RATIO);
        iVar3 = lib::L2CValue::as_integer(aLStack432);
        fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack416,fVar13);
        lib::L2CValue::L2CValue(aLStack480,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack496,0x157bd61b7d);
        uVar6 = lib::L2CValue::as_integer(aLStack480);
        uVar8 = lib::L2CValue::as_integer(aLStack496);
        fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack464,fVar13);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
        lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::operator_(aLStack416,aLStack448);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
        lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
        lib::L2CValue::L2CValue(aLStack416,false);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        bVar1 = lib::L2CValue::as_bool(aLStack416);
        pAVar9 = (AttackData *)
                 app::lua_bind::AttackModule__attack_data_impl(*ppBVar12,iVar3,(bool)(bVar1 & 1));
        app::lua_bind::AttackData__store_l2c_table_impl(pAVar9);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        uVar6 = lib::L2CValue::operator__(aLStack400,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,1);
          lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          iVar3 = lib::L2CValue::as_integer(aLStack416);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::operator_(aLStack288,aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,1);
          lib::L2CValue::operator_(aLStack432,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          iVar4 = lib::L2CValue::as_integer(aLStack416);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack432);
          if (iVar3 <= iVar4) {
            iVar3 = iVar3 + -1;
            do {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3 + 1);
              lib::L2CValue::L2CValue(aLStack432,false);
              iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
              bVar1 = lib::L2CValue::as_bool(aLStack432);
              pAVar9 = (AttackData *)
                       app::lua_bind::AttackModule__attack_data_impl
                                 (*ppBVar12,iVar5,(bool)(bVar1 & 1));
              app::lua_bind::AttackData__store_l2c_table_impl(pAVar9);
              lib::L2CValue::_L2CValue(aLStack432);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              uVar6 = lib::L2CValue::operator__(aLStack416,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
              ;
              if ((uVar6 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack432,iVar3 + 1);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x7af5c7bf6);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__(pLVar7,0x18cdc1683);
                pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x7af5c7bf6);
                pLVar10 = (L2CValue *)lib::L2CValue::operator__(pLVar10,0x18cdc1683);
                lib::L2CValue::operator_(pLVar7,pLVar10);
                lib::L2CValue::operator_(aLStack464,aLStack384);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x7af5c7bf6);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__(pLVar7,0x1fbdb2615);
                pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x7af5c7bf6);
                pLVar10 = (L2CValue *)lib::L2CValue::operator__(pLVar10,0x1fbdb2615);
                lib::L2CValue::operator_(pLVar7,pLVar10);
                lib::L2CValue::operator_(aLStack496,aLStack384);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x7af5c7bf6);
                pLVar7 = (L2CValue *)lib::L2CValue::operator__(pLVar7,0x162d277af);
                pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x7af5c7bf6);
                pLVar10 = (L2CValue *)lib::L2CValue::operator__(pLVar10,0x162d277af);
                lib::L2CValue::operator_(pLVar7,pLVar10);
                lib::L2CValue::operator_(aLStack544,aLStack384);
                iVar5 = lib::L2CValue::as_integer(aLStack432);
                uVar6 = lib::L2CValue::as_number(aLStack448);
                lVar15 = lib::L2CValue::as_number(aLStack480);
                uVar14 = lib::L2CValue::as_number(aLStack528);
                local_90 = uVar6 & 0xffffffff | lVar15 << 0x20;
                uStack136 = (ulong)uVar14;
                bVar1 = app::lua_bind::AttackModule__set_offset_impl
                                  (*ppBVar12,iVar5,(Vector3f *)&local_90);
                lib::L2CValue::L2CValue(aLStack512,(bool)(bVar1 & 1));
                lib::L2CValue::_L2CValue(aLStack512);
                lib::L2CValue::_L2CValue(aLStack528);
                lib::L2CValue::_L2CValue(aLStack544);
                lib::L2CValue::_L2CValue(aLStack480);
                lib::L2CValue::_L2CValue(aLStack496);
                lib::L2CValue::_L2CValue(aLStack448);
                lib::L2CValue::_L2CValue(aLStack464);
                lib::L2CValue::_L2CValue(aLStack432);
              }
              lib::L2CValue::_L2CValue(aLStack416);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar4);
          }
        }
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_EFFECT1_POS_X_MIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack288,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_EFFECT1_POS_X_MAX);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack304,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::operator_(aLStack304,aLStack288);
      lib::L2CValue::L2CValue(aLStack464,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_ATTACK_RATIO);
      iVar3 = lib::L2CValue::as_integer(aLStack464);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack448,fVar13);
      lib::L2CValue::operator_(aLStack432,aLStack448);
      lib::L2CValue::operator_(aLStack288,aLStack416);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_EFFECT1_X);
      fVar13 = (float)lib::L2CValue::as_number(aLStack384);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_EFFECT2_POS_X_MIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack288,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_EFFECT2_POS_X_MAX);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack304,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::operator_(aLStack304,aLStack288);
      lib::L2CValue::L2CValue(aLStack464,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_ATTACK_RATIO);
      iVar3 = lib::L2CValue::as_integer(aLStack464);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack448,fVar13);
      lib::L2CValue::operator_(aLStack432,aLStack448);
      lib::L2CValue::operator_(aLStack288,aLStack416);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLOAT_EFFECT2_X);
      fVar13 = (float)lib::L2CValue::as_number(aLStack384);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack288,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL);
        iVar3 = lib::L2CValue::as_integer(aLStack288);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack288);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack304,0x1be3cf7635);
          uVar6 = lib::L2CValue::as_integer(aLStack288);
          uVar8 = lib::L2CValue::as_integer(aLStack304);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar13);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack384,0x1f69db7bd4);
          uVar6 = lib::L2CValue::as_integer(aLStack304);
          uVar8 = lib::L2CValue::as_integer(aLStack384);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar8);
          lib::L2CValue::L2CValue(aLStack288,fVar13);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::L2CValue(aLStack400,0x1220fc2660);
          lib::L2CValue::L2CValue(aLStack416,0);
          uVar6 = lib::L2CValue::as_integer(aLStack400);
          uVar8 = lib::L2CValue::as_integer(aLStack416);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar8);
          lib::L2CValue::L2CValue(aLStack384,fVar13);
          lib::L2CValue::operator_(aLStack384,aLStack288);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::L2CValue(aLStack416,0xf71f4d4f8);
          lib::L2CValue::L2CValue(aLStack432,0);
          uVar6 = lib::L2CValue::as_integer(aLStack416);
          uVar8 = lib::L2CValue::as_integer(aLStack432);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar8);
          lib::L2CValue::L2CValue(aLStack400,fVar13);
          lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::L2CValue(aLStack432,0xf25ec86be);
          lib::L2CValue::L2CValue(aLStack448,0);
          uVar6 = lib::L2CValue::as_integer(aLStack432);
          uVar8 = lib::L2CValue::as_integer(aLStack448);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar6,uVar8);
          lib::L2CValue::L2CValue(aLStack416,fVar13);
          lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack432,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
          app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue(aLStack432,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
          app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
          app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
          app::sv_kinetic_energy::controller_set_accel_x_add(this->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
          app::sv_kinetic_energy::enable(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack416);
          FUN_710011ab00(this);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        }
      }
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_INT_VOICE_PLAY_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      bVar1 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar12,iVar3,0);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_INT_VOICE_KIND_NUM);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack288,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        iVar3 = FIGHTER_KIND_KIRBY;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
          uVar6 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,1);
            uVar6 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0x15b88f68ec);
              HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar12,HVar11,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack640,iVar3);
              pLVar7 = aLStack640;
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0x184757e6eb);
              HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar12,HVar11,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack624,iVar3);
              pLVar7 = aLStack624;
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,0x15568109c0);
            HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar12,HVar11,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack608,iVar3);
            pLVar7 = aLStack608;
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
          uVar6 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,1);
            uVar6 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0x17ea5d2079);
              HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar12,HVar11,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack592,iVar3);
              pLVar7 = aLStack592;
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1aecf2ea57);
              HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (*ppBVar12,HVar11,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack576,iVar3);
              pLVar7 = aLStack576;
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1704534155);
            HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar12,HVar11,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack560,iVar3);
            pLVar7 = aLStack560;
          }
        }
        lib::L2CValue::_L2CValue(pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack288);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      return;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar6 & 1) == 0) goto LAB_7100118a10;
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      pLVar7 = aLStack256;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar7 = aLStack224;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      uVar6 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) == 0) goto LAB_7100118a00;
      goto LAB_71001188d0;
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar7 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar7);
LAB_7100118a00:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

