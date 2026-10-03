
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100040470(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_PARENTS_SITUATION_CHANGE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_PARENTS_SITUATION_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_CONTINUE_MOT1);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x59f79558f);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar4 = lib::L2CValue::as_hash(aLStack96);
        fVar5 = (float)lib::L2CValue::as_number(aLStack112);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,fVar5,fVar6,
                   (bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_CONTINUE_MOT1);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x59f79558f);
        HVar4 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,-1.0,1.0,0.0,false,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_CONTINUE_MOT1);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x9bdc1e36b);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar4 = lib::L2CValue::as_hash(aLStack96);
        fVar5 = (float)lib::L2CValue::as_number(aLStack112);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,fVar5,fVar6,
                   (bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_CONTINUE_MOT1);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x9bdc1e36b);
        HVar4 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_PARENTS_SITUATION_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

