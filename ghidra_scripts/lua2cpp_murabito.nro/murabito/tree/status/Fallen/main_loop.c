
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoTree::status::Fallen_main_loop(L2CWeaponMurabitoTree *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float *pfVar7;
  Hash40 HVar8;
  ulong *puVar9;
  ulong uVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  long lVar16;
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  ulong local_230;
  ulong uStack552;
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  ulong auStack416 [2];
  L2CValue aLStack400 [16];
  ulong auStack384 [2];
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  ppBVar11 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)auStack384);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    bVar2 = lib::L2CValue::operator_cast_to_bool(pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100045fd4;
    }
  }
  iVar3 = app::lua_bind::KineticModule__get_kinetic_type_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_230,iVar3);
  lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_TYPE_RESET);
  uVar6 = lib::L2CValue::operator__(aLStack368,(L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_230,0x25468228ef);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,0x4b73e5edc);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_230);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack384);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack384,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_230,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack384,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_LINE_HIT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_230,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    if ((bVar2 & 1U) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,_STATUS_KIND_NONE);
      uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack384,
                   _WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_FLAG_MELEE_NO_RANDOM);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack384,0x253e4f21f0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack384);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          puVar9 = auStack384;
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_230,1);
          lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_230);
          puVar9 = &local_230;
        }
        lib::L2CValue::_L2CValue((L2CValue *)puVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,0);
        uVar6 = lib::L2CValue::operator_((L2CValue *)&local_230,aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_INT_ITEM_NUM);
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_230);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack384,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_FLOAT_RATE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
          lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::L2CValue((L2CValue *)auStack384,0xa053c6ceb);
          lib::L2CValue::L2CValue((L2CValue *)auStack416,0xefaf8de00);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack416);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::L2CValue((L2CValue *)auStack384,0xa053c6ceb);
          lib::L2CValue::L2CValue((L2CValue *)auStack416,0xf50bc078d);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack416);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
          lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::operator_(aLStack224,aLStack160);
          lib::L2CValue::operator_((L2CValue *)auStack416,aLStack192);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack384);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_230,
                     _WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_WOOD_ANGLE);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::L2CValue((L2CValue *)auStack384,0xa053c6ceb);
          lib::L2CValue::L2CValue((L2CValue *)auStack416,0xe9c0ffebf);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack416);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::L2CValue((L2CValue *)auStack384,0xa053c6ceb);
          lib::L2CValue::L2CValue((L2CValue *)auStack416,0xf0b045eb0);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack416);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::operator_(aLStack144,aLStack240);
          lib::L2CValue::operator_((L2CValue *)auStack416,aLStack192);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack384);
          lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
          lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_230,
                     _WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_WOOD_SPEED);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          FUN_7100046800(this);
        }
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_HIT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack384,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_LINE_HIT_FLOOR
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_INT_HIT_NUM);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_TYPE_MURABITO_TREE_BOUND);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,0x5a50e7db6);
      lib::L2CValue::L2CValue((L2CValue *)auStack384,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,1.0);
      lib::L2CValue::L2CValue(aLStack432,false);
      HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_230);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
      fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack416);
      bVar1 = lib::L2CValue::as_bool(aLStack432);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar11,HVar8,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)auStack416);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,0x78);
      lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar3 = lib::L2CValue::as_integer(aLStack336);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
      iVar3 = lib::L2CValue::as_integer(aLStack336);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,5);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack384,
                 _WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_INT_LINE_CHECK_DISABLE_FRAME);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack384);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)auStack384);
      lib::L2CValue::L2CValue((L2CValue *)auStack416);
      lib::L2CValue::L2CValue(aLStack432);
      pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,*pfVar7);
      lib::L2CValue::L2CValue(aLStack544,pfVar7[1]);
      lib::L2CValue::L2CValue(aLStack528,pfVar7[2]);
      lib::L2CValue::operator_((L2CValue *)auStack384,(L2CValue *)&local_230);
      lib::L2CValue::operator_((L2CValue *)auStack416,aLStack544);
      lib::L2CValue::operator_(aLStack432,aLStack528);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue(aLStack496,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_FLOAT_SPEED_X);
      iVar3 = lib::L2CValue::as_integer(aLStack496);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack480,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,-0.5);
      lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::operator_((L2CValue *)auStack384,aLStack464);
      lib::L2CValue::operator_((L2CValue *)auStack384,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack496);
      lib::L2CValue::L2CValue(aLStack496,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_FLOAT_SPEED_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack496);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack480,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,-0.5);
      lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::operator_((L2CValue *)auStack416,aLStack464);
      lib::L2CValue::operator_((L2CValue *)auStack416,aLStack448);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack480);
      lib::L2CValue::_L2CValue(aLStack496);
      uVar6 = lib::L2CValue::as_number((L2CValue *)auStack384);
      lVar16 = lib::L2CValue::as_number((L2CValue *)auStack416);
      uVar15 = lib::L2CValue::as_number(aLStack432);
      local_230 = uVar6 & 0xffffffff | lVar16 << 0x20;
      uStack552 = (ulong)uVar15;
      app::lua_bind::PostureModule__set_pos_impl(*ppBVar11,(Vector3f *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
      lib::L2CValue::operator_((L2CValue *)auStack384,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_HIT_POS_X);
      fVar12 = (float)lib::L2CValue::as_number(aLStack448);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
      lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_HIT_POS_Y);
      fVar12 = (float)lib::L2CValue::as_number(aLStack448);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_LINE_HIT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)auStack416);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      goto LAB_7100045fd4;
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack416,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_INT_ITEM_INTERVAL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_230,0);
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack384,(L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    if ((uVar6 & 1) != 0) {
      FUN_7100046800(this);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_TYPE_RESET);
    uVar6 = lib::L2CValue::operator__(aLStack368,(L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack384,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_LINE_HIT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack384,
                   _WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_LINE_HIT_FLOOR);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,(bool)(bVar1 & 1));
        lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        fVar12 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
        lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::operator_(aLStack112,aLStack256);
        lib::L2CValue::operator_(aLStack112);
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack448,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_HIT_POS_X);
          iVar3 = lib::L2CValue::as_integer(aLStack448);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack432,fVar12);
          lib::L2CValue::operator_(aLStack320,aLStack432);
          lib::L2CValue::L2CValue
                    (aLStack496,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_HIT_POS_Y);
          iVar3 = lib::L2CValue::as_integer(aLStack496);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack480,fVar12);
          lib::L2CValue::operator_(aLStack176,aLStack480);
          lib::L2CValue::L2CValue(aLStack512,0.0);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack416);
          fVar13 = (float)lib::L2CValue::as_number(aLStack464);
          fVar14 = (float)lib::L2CValue::as_number(aLStack512);
          fVar12 = (float)app::sv_math::vec3_length(fVar12,fVar13,fVar14);
          lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,1.0);
          uVar6 = lib::L2CValue::operator__((L2CValue *)auStack384,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::_L2CValue(aLStack464);
          lib::L2CValue::_L2CValue(aLStack480);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue(aLStack448);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_230,true);
            lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_230);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_230,true);
            lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_230);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        }
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_230,0x5a50e7db6);
          lib::L2CValue::L2CValue((L2CValue *)auStack384,0.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack416,1.0);
          lib::L2CValue::L2CValue(aLStack432,false);
          HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_230);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
          fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack416);
          bVar1 = lib::L2CValue::as_bool(aLStack432);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar11,HVar8,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack432);
          lib::L2CValue::_L2CValue((L2CValue *)auStack416);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        }
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_INT_HIT_NUM);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
          app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack416,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_INT_HIT_NUM);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,2);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_230,(L2CValue *)auStack384);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        lib::L2CValue::_L2CValue((L2CValue *)auStack416);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_TYPE_MURABITO_TREE_BOUND);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
LAB_7100045944:
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_TYPE_RESET);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_TYPE_RESET);
          lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_230,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
          app::lua_bind::KineticModule__unable_energy_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack384,
                     _WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_ATTACK_CLEAR);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_230,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)&local_230);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          if ((bVar2 & 1U) != 0) {
            app::lua_bind::AttackModule__clear_all_impl(*ppBVar11);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_230,
                       _WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_ATTACK_CLEAR);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
            goto LAB_7100045944;
          }
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
        lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_HIT_POS_X);
        fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_HIT_POS_Y);
        fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack416,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_INT_ITEM_NUM);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_230,0);
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack384,(L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      puVar9 = auStack416;
LAB_7100045b50:
      lib::L2CValue::_L2CValue((L2CValue *)puVar9);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_TYPE_RESET);
      uVar6 = lib::L2CValue::operator__(aLStack368,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack416);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_230,0);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack384);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
        lib::L2CValue::L2CValue((L2CValue *)&local_230,0);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack384);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        puVar9 = &local_230;
        goto LAB_7100045b50;
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack416,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_ATTACK_CLEAR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)auStack384);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack416,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar12);
      lib::L2CValue::L2CValue(aLStack448,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack448);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack432,fVar12);
      lib::L2CValue::L2CValue(aLStack464,0.0);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack384);
      fVar13 = (float)lib::L2CValue::as_number(aLStack432);
      fVar14 = (float)lib::L2CValue::as_number(aLStack464);
      fVar12 = (float)app::sv_math::vec3_length(fVar12,fVar13,fVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
      lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack416);
      lib::L2CValue::L2CValue((L2CValue *)auStack384,0xa053c6ceb);
      lib::L2CValue::L2CValue((L2CValue *)auStack416,0x1298b63165);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack384);
      uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack416);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
      uVar6 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      lib::L2CValue::_L2CValue((L2CValue *)auStack416);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      if ((uVar6 & 1) != 0) {
        app::lua_bind::AttackModule__clear_all_impl(*ppBVar11);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_230,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLAG_ATTACK_CLEAR
                  );
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_230);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack416,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack416);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_230,0);
  uVar6 = lib::L2CValue::operator__((L2CValue *)auStack384,(L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack416);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_230,0x24886a7904);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,0x4b73e5edc);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_230);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack384);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    lib::L2CValue::L2CValue(aLStack592,0xfdaed8515);
    FUN_7100047320(this,aLStack592);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100045fd4;
  }
  fVar12 = (float)app::lua_bind::PostureModule__rot_x_impl(*ppBVar11,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_230,fVar12);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  lib::L2CValue::L2CValue(aLStack432,_WEAPON_MURABITO_TREE_STATUS_FALLEN_WORK_FLOAT_MOTION_ANGLE);
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_230,180.0);
  lib::L2CValue::operator_((L2CValue *)&local_230,(L2CValue *)auStack416);
  lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  lib::L2CValue::operator_(aLStack352,(L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack416);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
  uVar6 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_230);
  lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  if ((uVar6 & 1) == 0) {
    bVar2 = false;
LAB_7100045f4c:
    lib::L2CValue::L2CValue((L2CValue *)&local_230,0.0);
    uVar6 = lib::L2CValue::operator_((L2CValue *)&local_230,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = lib::L2CValue::operator__(aLStack352,aLStack128);
      uVar6 = uVar6 & 0xffffffff;
    }
    if (bVar2) {
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    }
    if ((uVar6 & 1) != 0) goto LAB_7100045fa0;
  }
  else {
    lib::L2CValue::operator_(aLStack352);
    uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)auStack384);
    if ((uVar6 & 1) == 0) {
      bVar2 = true;
      goto LAB_7100045f4c;
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
LAB_7100045fa0:
    lib::L2CValue::L2CValue((L2CValue *)&local_230,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_230);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar11,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_230);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100045fd4:
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

