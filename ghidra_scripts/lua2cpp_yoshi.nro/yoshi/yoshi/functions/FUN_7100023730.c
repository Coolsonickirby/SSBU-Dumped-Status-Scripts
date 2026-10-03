
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023730(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  float fVar14;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_JUMP);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  ppBVar10 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar6 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_WAIT);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    uVar6 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x112ab24d60);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar14);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack144,0xcbed5c24c);
        lib::L2CValue::L2CValue(aLStack160,0);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack128,fVar14);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        uVar11 = lib::L2CValue::as_number(aLStack112);
        uVar12 = lib::L2CValue::as_number(aLStack128);
        uVar13 = lib::L2CValue::as_number(aLStack176);
        local_50 = CONCAT44(uVar12,uVar11);
        uStack72 = (ulong)uVar13;
        app::lua_bind::KineticModule__add_speed_impl(*ppBVar10,(Vector3f *)&local_50);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack144,0x112ab24d60);
        lib::L2CValue::L2CValue(aLStack160,0);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        uVar8 = lib::L2CValue::as_integer(aLStack160);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack128,fVar14);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        uVar11 = lib::L2CValue::as_number(aLStack112);
        uVar12 = lib::L2CValue::as_number(aLStack128);
        uVar13 = lib::L2CValue::as_number(aLStack176);
        local_50 = CONCAT44(uVar12,uVar11);
        uStack72 = (ulong)uVar13;
        app::lua_bind::KineticModule__add_speed_impl(*ppBVar10,(Vector3f *)&local_50);
      }
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x40);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_JUMP_FLAG_BUTTON);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_JUMP);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_WAIT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_50);
      app::lua_bind::AttackModule__sleep_impl(*ppBVar10,(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_71000240e8;
    }
    bVar3 = lib::L2CValue::operator.cast.to.bool(param_3);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_WAIT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_JUMP_FLAG_BUTTON);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar3 & 1U) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x1b);
      lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack128,0xe5fbcdc0e);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar14);
      uVar6 = lib::L2CValue::operator<(pLVar9,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
        goto LAB_7100023eb8;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
LAB_7100023eb8:
        lVar1 = -0x40;
LAB_7100023ebc:
        lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
      }
    }
  }
  else {
    pLVar9 = (L2CValue *)((long)param_2 + 200);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar4);
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0x8678d0955);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack128,iVar4);
      uVar6 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x20);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
        lib::L2CValue::operator&(pLVar7,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_JUMP_FLAG_BUTTON);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_50,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_JUMP);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue(aLStack112,0x1095b52773);
          lib::L2CValue::L2CValue(aLStack128,0);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar4);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_WAIT);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          iVar5 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x20);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
        lib::L2CValue::operator&(pLVar9,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar3 & 1U) != 0) {
          bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_50,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_JUMP);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            lib::L2CValue::L2CValue(aLStack112,0x1095b52773);
            lib::L2CValue::L2CValue(aLStack128,0);
            uVar6 = lib::L2CValue::as_integer(aLStack112);
            uVar8 = lib::L2CValue::as_integer(aLStack128);
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar8);
            lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar4);
            lib::L2CValue::L2CValue
                      (aLStack144,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_WAIT);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
            iVar5 = lib::L2CValue::as_integer(aLStack144);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            lib::L2CValue::~L2CValue(aLStack128);
            lVar1 = -0x60;
            goto LAB_7100023ebc;
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_71000240e8:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

