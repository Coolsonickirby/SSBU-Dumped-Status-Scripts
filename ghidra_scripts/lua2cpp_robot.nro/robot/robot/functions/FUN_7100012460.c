
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012460(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_HOLD);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_END);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_JUMP_AERIAL);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_GUARD_ON);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ESCAPE_F);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_B);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_AIR);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) != 0) goto LAB_7100012664;
        lib::L2CValue::L2CValue(aLStack64,0xaec2db62e);
        HVar5 = lib::L2CValue::as_hash(aLStack64);
        app::lua_bind::EffectModule__remove_common_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0.0);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
        fVar6 = (float)lib::L2CValue::as_number(aLStack64);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
        lib::L2CValue::~L2CValue(aLStack96);
LAB_710001274c:
        lib::L2CValue::~L2CValue(aLStack64);
      }
      else {
LAB_7100012664:
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
        lib::L2CValue::L2CValue(aLStack64,fVar6);
        lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack144,0x106f411784);
        uVar3 = lib::L2CValue::as_integer(aLStack128);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack112,fVar6);
        uVar3 = lib::L2CValue::operator<=(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,0xaec2db62e);
          HVar5 = lib::L2CValue::as_hash(aLStack64);
          app::lua_bind::EffectModule__req_common_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,0.0);
          goto LAB_710001274c;
        }
      }
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_GENERATE_ARTICLE_GYRO);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_GENERATE_ARTICLE_GYRO_HOLDER);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__remove_exist_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
      pLVar2 = aLStack64;
      goto LAB_71000127b8;
    }
  }
  pLVar2 = aLStack80;
LAB_71000127b8:
  lib::L2CValue::~L2CValue(pLVar2);
  return;
}

