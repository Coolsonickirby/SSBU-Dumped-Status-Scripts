
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001cfc0(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar3 = app::lua_bind::ArticleModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,1);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if (((uVar5 & 1) == 0) || (uVar5 = lib::L2CValue::operator==(aLStack96,param_2), (uVar5 & 1) != 0)
     ) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = lib::L2CValue::operator==(aLStack96,param_3), (uVar5 & 1) != 0))
    goto LAB_710001d1d8;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
    lib::L2CValue::L2CValue(aLStack144,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar3 = lib::L2CValue::as_hash(param_3);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::ArticleModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar3,(bool)(bVar1 & 1),-1.0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
    lib::L2CValue::L2CValue(aLStack144,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar3 = lib::L2CValue::as_hash(param_2);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::ArticleModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar3,(bool)(bVar1 & 1),-1.0);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710001d1d8:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

