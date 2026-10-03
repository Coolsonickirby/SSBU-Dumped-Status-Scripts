
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100173cf0(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar8 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack240,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  uVar4 = lib::L2CValue::operator<(aLStack96,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_FLY);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator=(aLStack240,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar7 = (L2CValue *)((long)param_2 + 200);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator&(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_BUTTON);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack96,1);
        uVar4 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack256,aLStack240);
          lib::L2CValue::L2CValue(aLStack272,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::L2CValue(param_1,true);
          goto LAB_7100174538;
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_JUMP_FLY_NEXT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack288,aLStack240);
          lib::L2CValue::L2CValue(aLStack304,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::L2CValue(param_1,true);
          goto LAB_7100174538;
        }
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator&(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack96,1);
        uVar4 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar4 & 1) != 0) {
          bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar8);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack320,aLStack240);
            lib::L2CValue::L2CValue(aLStack336,true);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
            lib::L2CValue::~L2CValue(aLStack336);
            lib::L2CValue::~L2CValue(aLStack320);
            lib::L2CValue::L2CValue(param_1,true);
            goto LAB_7100174538;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack368,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_FLY_NEXT);
    iVar3 = lib::L2CValue::as_integer(aLStack368);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack352,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack352);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_ITEM_SHOOT_WORK_FLAG_JUMP_FLY_NEXT);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,0xb99cc3fbc);
      lib::L2CValue::L2CValue(aLStack144,0);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_JUMP_AERIAL_TYPE_FLY);
      uVar4 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JUMP_AERIAL_TYPE_FLY_BUTTON);
        uVar4 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_71001743f8;
        lib::L2CValue::L2CValue(aLStack144,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack96,2);
        uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_71001743e8;
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator&(pLVar5,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
        if ((bVar1 & 1U) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1b);
          lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack192,0xcce8375ba);
          uVar4 = lib::L2CValue::as_integer(aLStack176);
          uVar6 = lib::L2CValue::as_integer(aLStack192);
          fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack96,fVar9);
          uVar4 = lib::L2CValue::operator<=(aLStack96,pLVar5);
          if ((uVar4 & 1) == 0) {
            bVar2 = 0;
          }
          else {
            bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar8);
            lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack208);
            lib::L2CValue::~L2CValue(aLStack208);
          }
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((bVar2 & 1) == 0) goto LAB_71001743f8;
        }
        else {
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FLY);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ITEM_SCREW_JUMP_AERIAL);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) goto LAB_7100174a4c;
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ITEM_SHOOT_JUMP);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) goto LAB_7100174a4c;
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ITEM_SHOOT_FLY);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) goto LAB_7100174a4c;
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SNAKE_SPECIAL_N_HOLD_JUMP_AERIAL);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) goto LAB_7100174a4c;
        }
        else {
LAB_7100174a4c:
          lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_JUMP_FLAG_FLY_NEXT);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack96,true);
          uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((uVar4 & 1) == 0) goto LAB_71001743f8;
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,10);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_TREAD_JUMP);
        uVar4 = lib::L2CValue::operator==(pLVar7,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack128,fVar9);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          uVar4 = lib::L2CValue::operator<(aLStack96,aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack384,false);
            goto LAB_7100174404;
          }
        }
        lib::L2CValue::L2CValue(aLStack384,true);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack96,2);
        uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
LAB_71001743e8:
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
LAB_71001743f8:
          lib::L2CValue::L2CValue(aLStack384,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_JUMP);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          if ((bVar1 & 1U) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1b);
            lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack208,0xcce8375ba);
            uVar4 = lib::L2CValue::as_integer(aLStack192);
            uVar6 = lib::L2CValue::as_integer(aLStack208);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
            lib::L2CValue::L2CValue(aLStack176,fVar9);
            uVar4 = lib::L2CValue::operator<=(aLStack176,pLVar5);
            if ((uVar4 & 1) == 0) {
              bVar2 = 0;
            }
            else {
              bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar8);
              lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack224);
              lib::L2CValue::~L2CValue(aLStack224);
            }
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((bVar2 & 1) == 0) goto LAB_71001743f8;
          }
          else {
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack144);
          }
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FLY);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ITEM_SCREW_JUMP_AERIAL);
            uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) != 0) goto LAB_71001747f4;
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ITEM_SHOOT_JUMP);
            uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) != 0) goto LAB_71001747f4;
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ITEM_SHOOT_FLY);
            uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) != 0) goto LAB_71001747f4;
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SNAKE_SPECIAL_N_HOLD_JUMP_AERIAL);
            uVar4 = lib::L2CValue::operator==(pLVar5,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) != 0) goto LAB_71001747f4;
          }
          else {
LAB_71001747f4:
            iVar3 = lib::L2CValue::as_integer(aLStack400);
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
            lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar4 = lib::L2CValue::operator==(aLStack128,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((uVar4 & 1) == 0) goto LAB_71001743f8;
          }
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,10);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_TREAD_JUMP);
          uVar4 = lib::L2CValue::operator==(pLVar7,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
            iVar3 = lib::L2CValue::as_integer(aLStack144);
            fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar3);
            lib::L2CValue::L2CValue(aLStack128,fVar9);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            uVar4 = lib::L2CValue::operator<(aLStack96,aLStack128);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack384,false);
              goto LAB_7100174404;
            }
          }
          lib::L2CValue::L2CValue(aLStack384,true);
        }
      }
LAB_7100174404:
      lib::L2CValue::~L2CValue(aLStack112);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack384);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        uVar4 = lib::L2CValue::operator<(aLStack96,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack368);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack416,aLStack240);
          lib::L2CValue::L2CValue(aLStack432,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::L2CValue(param_1,true);
          goto LAB_7100174538;
        }
        goto LAB_710017452c;
      }
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack400);
    }
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack368);
  }
LAB_710017452c:
  lib::L2CValue::L2CValue(param_1,0);
LAB_7100174538:
  lib::L2CValue::~L2CValue(aLStack240);
  return;
}

