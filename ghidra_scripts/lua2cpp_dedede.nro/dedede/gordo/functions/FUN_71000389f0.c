
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000389f0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_PARENTS_SITUATION_CHANGE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) goto LAB_7100038dd0;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_PARENTS_SITUATION_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_CONTINUE_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::L2CValue(aLStack96,0x78d509d84);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar4 = lib::L2CValue::as_hash(aLStack96);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,fVar6,fVar5,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      goto LAB_7100038d70;
    }
    lib::L2CValue::L2CValue(aLStack80,0x78d509d84);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,-1.0,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_CONTINUE_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::L2CValue(aLStack96,0x3fd3b2e70);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar4 = lib::L2CValue::as_hash(aLStack96);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,fVar6,fVar5,
                 (bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
LAB_7100038d70:
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x3fd3b2e70);
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,-1.0,1.0,0.0,false,false);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::MotionModule__set_rate_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar6)
  ;
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_PARENTS_SITUATION_CHANGE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100038dd0:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

