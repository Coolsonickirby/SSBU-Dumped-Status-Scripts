
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c240(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(param_2,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(param_2);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator==(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) goto LAB_710001c364;
    }
    lib::L2CValue::L2CValue(param_1,1);
    goto LAB_710001c800;
  }
  lib::L2CValue::~L2CValue(aLStack144);
LAB_710001c364:
  this = &param_2->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack208,pLVar6);
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessShoot_isShootAirStatus(param_2,(L2CValue)0x30);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack208);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::MotionModule__is_end_partial_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar6 = aLStack144;
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack128,aLStack80);
    pLVar6 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar6);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_WATER);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_JUMP_SQUAT);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_BRAKE_F)
      ;
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_BRAKE_B);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_DASH_F);
          uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_DASH_B)
            ;
            uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_LANDING);
              uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              if ((uVar5 & 1) == 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                lib::L2CValue::L2CValue
                          (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WAIT);
                uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                if ((uVar5 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
                  lib::L2CValue::operator=(aLStack96,aLStack80);
                  goto LAB_710001c918;
                }
                pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                lib::L2CValue::L2CValue
                          (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_F);
                uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                if ((uVar5 & 1) == 0) {
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                  lib::L2CValue::L2CValue
                            (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WALK_B);
                  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
                  lib::L2CValue::~L2CValue(aLStack80);
                  if ((uVar5 & 1) != 0) goto LAB_710001c900;
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                  lib::L2CValue::L2CValue
                            (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_AIR);
                  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
                  lib::L2CValue::~L2CValue(aLStack80);
                  if ((uVar5 & 1) != 0) {
                    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
                    lib::L2CValue::operator=(aLStack96,aLStack80);
                    goto LAB_710001c918;
                  }
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
                  lib::L2CValue::L2CValue
                            (aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_JUMP);
                  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
                  lib::L2CValue::~L2CValue(aLStack80);
                  if ((uVar5 & 1) != 0) {
                    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
                    lib::L2CValue::operator=(aLStack96,aLStack80);
                    goto LAB_710001c918;
                  }
                }
                else {
LAB_710001c900:
                  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_WALK);
                  lib::L2CValue::operator=(aLStack96,aLStack80);
LAB_710001c918:
                  lib::L2CValue::~L2CValue(aLStack80);
                }
                lib::L2CValue::L2CValue(aLStack224,aLStack96);
                lib::L2CValue::L2CValue(aLStack240,false);
                lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
                lib::L2CValue::~L2CValue(aLStack240);
                lib::L2CValue::~L2CValue(aLStack224);
                lib::L2CValue::L2CValue(param_1,1);
                goto LAB_710001c800;
              }
            }
          }
        }
      }
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,8);
  lib::L2CValue::operator!(pLVar6);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
LAB_710001c7c4:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_WATER);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_WATER_INT_INTERVAL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_WATER_INT_INTERVAL);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator<=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_GENERATE_ARTICLE_SPRINKLING_WATER);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_enable_impl
                  (param_2->moduleAccessor,iVar3,false,-1);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack160,0xea80008c8);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack80,fVar8);
        lib::L2CValue::operator=(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_WATER_INT_INTERVAL);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
        goto LAB_710001c7c4;
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_710001c800:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

