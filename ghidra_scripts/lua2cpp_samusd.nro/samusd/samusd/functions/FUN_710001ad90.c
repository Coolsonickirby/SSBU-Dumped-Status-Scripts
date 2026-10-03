
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ad90(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *this;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xa02480224);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (param_2->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),fVar8,false,false);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SAMUS_GENERATE_ARTICLE_GBEAM);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SAMUSD);
  uVar5 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUSD_GENERATE_ARTICLE_GBEAM);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__generate_article_impl(param_2->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_SAMUS_GBEAM_STATUS_KIND_PULL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__change_status_impl(param_2->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack112,0x1287c399ec);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (param_2->moduleAccessor,iVar2,HVar4,-1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,FUN_710001b080);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

