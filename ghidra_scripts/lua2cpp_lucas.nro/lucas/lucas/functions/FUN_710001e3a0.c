
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e3a0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar7 = (L2CValue *)(param_1 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_N_HOLD);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_N_FIRE);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_STATUS_KIND_SPECIAL_N_END);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_SPECIAL_N_FLAG_ALREADY_GENERATED);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::~L2CValue(aLStack64);
          pLVar7 = aLStack80;
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_GENERATE_ARTICLE_PK_FREEZE);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) == 0) {
            return;
          }
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_GENERATE_ARTICLE_PK_FREEZE);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUCAS_PK_FREEZE_STATUS_KIND_NO_BANG);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__change_status_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4,0);
          lib::L2CValue::~L2CValue(aLStack80);
          pLVar7 = aLStack64;
        }
        lib::L2CValue::~L2CValue(pLVar7);
      }
    }
  }
  return;
}

