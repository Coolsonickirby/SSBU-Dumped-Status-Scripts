
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialS_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_F);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  this_00 = &this->globalTable;
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_7100071654;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_LADDER_ATTACK);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::status_pre_LadderAttack(this);
      return;
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_SQUAT);
  uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
LAB_7100071654:
      lua2cpp::L2CFighterCommon::status_pre_AttackAir(this);
      return;
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar2 = lib::L2CValue::as_integer(pLVar5);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,-1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_SPEED_X_MAX_MUL);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_L);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_R);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_
            ((L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_L);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_
            ((L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_CAPTURE_JUMP_SPEED_Y,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_R);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHORT_L);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHORT_R);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_R);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REINFORCE_L);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REINFORCE_R);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_COMBO_ENABLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CANCEL_ENABLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_F);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_DRAGON_BEAM_SHOOT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_REVERSE_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CHECK_REVERSE_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CHARGE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_IS_CANCEL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_COMBO_SPECIAL_BUTTON);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_IGNORE_FLOOR_PASSABLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BLOCKED_PUNCH_L);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BLOCKED_PUNCH_R);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE)
  ;
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ATTACK_S4_START);
  uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_SPECIAL_N);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ATTACK_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
LAB_71000720d8:
        iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack112,iVar2);
        lib::L2CValue::L2CValue(aLStack128,false);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
        lib::L2CValue::operator_(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_COMMAND_ATTACK_AIR_KIND_NONE);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                    (*ppBVar9,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue(aLStack96);
          iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack96,iVar2);
          lib::L2CValue::operator_(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_COMMAND_ATTACK_AIR_KIND_HI);
          uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
            uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,FIGHTER_COMMAND_ATTACK_AIR_KIND_N);
              uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar4 & 1) == 0) goto LAB_7100072480;
            }
          }
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_LADDER_ATTACK);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            lua2cpp::L2CFighterCommon::status_pre_AttackAir(this);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
            uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack176,0x15bb516057);
              lib::L2CValue::L2CValue(aLStack192,0);
              uVar4 = lib::L2CValue::as_integer(aLStack176);
              uVar7 = lib::L2CValue::as_integer(aLStack192);
              iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar4,uVar7);
              lib::L2CValue::L2CValue(aLStack160,iVar2);
              lib::L2CValue::L2CValue(aLStack96,0);
              uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack176);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ATTACK_AIR);
                iVar2 = lib::L2CValue::as_integer(aLStack96);
                app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::L2CValue((L2CValue *)return_value,true);
                goto LAB_71000726d0;
              }
            }
            lua2cpp::L2CFighterCommon::status_pre_LadderAttack(this);
          }
LAB_71000726d0:
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          return;
        }
LAB_7100072480:
        lib::L2CValue::L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x14247ed7b9);
          lib::L2CValue::operator_(aLStack160,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x130db979a9);
          lib::L2CValue::operator_(aLStack160,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_COMMAND_ATTACK_AIR_KIND_B);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0x130db979a9);
          uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x15c3279a06);
            lib::L2CValue::operator_(aLStack160,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x14deb94dcc);
            lib::L2CValue::operator_(aLStack160,aLStack96);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L)
        ;
        lVar6 = lib::L2CValue::as_integer(aLStack160);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
LAB_7100072ba4:
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar5 = aLStack160;
        goto LAB_7100072bb0;
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_LADDER_ATTACK);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_71000720d8;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_SPECIAL_S);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x22);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT3_FLAG_SPECIAL_S_SMASH_DASH);
        lib::L2CValue::operator_(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x13f7b644ca);
          lib::L2CValue::operator_(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_R);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x14de71eada);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        iVar2 = app::lua_bind::FighterControlModuleImpl__get_special_s_turn_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack128,iVar2);
        lib::L2CValue::L2CValue(aLStack208,aLStack128);
        FUN_710004efb0(aLStack160,*ppBVar9,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_TURN_DASH);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) {
            app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar9);
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack160,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
          }
        }
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0x13f7b644ca);
          uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x151766a5d9);
            lib::L2CValue::operator_(aLStack112,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x140af87213);
            lib::L2CValue::operator_(aLStack112,aLStack96);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHORT_R);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R)
        ;
        lVar6 = lib::L2CValue::as_integer(aLStack112);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
        goto LAB_7100072ba4;
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ATTACK);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x14247ed7b9);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
        lVar6 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
        goto LAB_7100072610;
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ATTACK_S3);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        app::lua_bind::WorkModule__clear_transition_term_impl(*ppBVar9);
        bVar8 = false;
        goto LAB_7100072fd0;
      }
      iVar2 = app::lua_bind::FighterControlModuleImpl__get_attack_s3_turn_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::L2CValue(aLStack224,aLStack112);
      FUN_710004efb0(aLStack128,*ppBVar9,aLStack224);
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x14247ed7b9);
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
        lVar6 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x15c3279a06);
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
        lVar6 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHORT_L);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
      pLVar5 = aLStack96;
      goto LAB_7100072bb8;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_F);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_LADDER);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_LADDER_ATTACK);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
        goto LAB_7100072478;
      }
      lib::L2CValue::L2CValue(aLStack96,0x14de71eada);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
      lVar6 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
LAB_7100072610:
      lib::L2CValue::_L2CValue(aLStack112);
      lVar6 = -0x50;
      goto LAB_7100072bc0;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
LAB_7100072478:
    pLVar5 = aLStack96;
  }
  else {
    iVar2 = app::lua_bind::FighterControlModuleImpl__get_attack_s4_turn_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack144,aLStack112);
    FUN_710004efb0(aLStack128,*ppBVar9,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_TURN_DASH);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator_(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x130db979a9);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
      lVar6 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x14deb94dcc);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
      lVar6 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar9,lVar6,iVar2);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
    pLVar5 = aLStack96;
LAB_7100072bb0:
    lib::L2CValue::_L2CValue(pLVar5);
    pLVar5 = aLStack128;
LAB_7100072bb8:
    lib::L2CValue::_L2CValue(pLVar5);
    lVar6 = -0x60;
LAB_7100072bc0:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar6));
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_JUMP);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_JUMP_AERIAL);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL_AERIAL);
            uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar4 & 1) == 0) {
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_LADDER);
              uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar4 & 1) == 0) {
                app::lua_bind::WorkModule__clear_transition_term_impl(*ppBVar9);
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
                iVar2 = lib::L2CValue::as_integer(aLStack96);
                app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
              }
              else {
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_LADDER);
                iVar2 = lib::L2CValue::as_integer(aLStack96);
                app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL_AERIAL);
              iVar2 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
            iVar2 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_AERIAL);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_WALK);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WALK_BRAKE);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          app::lua_bind::WorkModule__clear_transition_term_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WAIT);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK_BRAKE);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(*ppBVar9,iVar2);
      }
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack176,0x1d5e5c91ca);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar4,uVar7);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar5 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar5);
  bVar8 = true;
LAB_7100072fd0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar8);
  return;
}

