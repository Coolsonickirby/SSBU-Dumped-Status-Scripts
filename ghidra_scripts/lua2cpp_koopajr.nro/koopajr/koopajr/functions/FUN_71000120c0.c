
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000120c0(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  uint uVar5;
  long lVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  pLVar4 = (L2CValue *)(param_1 + 200);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_DASH);
  uVar3 = lib::L2CValue::operator==(pLVar2,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_HIT_WALL);
    uVar3 = lib::L2CValue::operator==(pLVar2,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_JUMP);
      uVar3 = lib::L2CValue::operator==(pLVar2,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar3 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_SPIN_TURN);
        uVar3 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_KART);
          iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          app::lua_bind::ArticleModule__remove_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
          goto LAB_71000121fc;
        }
      }
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_INHERIT_SPEED);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
LAB_71000121fc:
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  lVar6 = lib::L2CValue::as_number(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar3 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_50,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

