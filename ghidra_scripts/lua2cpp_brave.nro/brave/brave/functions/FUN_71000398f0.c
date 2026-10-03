
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000398f0(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  FighterBraveSpecialLwVariousKind FVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CTable *this;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
  uVar7 = lib::L2CValue::operator==(param_2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    FVar5 = lib::L2CValue::as_integer(param_3);
    cVar4 = app::FighterSpecializer_Brave::get_special_lw_various_kind2command(FVar5);
    lib::L2CValue::L2CValue(aLStack112,(int)cVar4);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND_NONE);
    uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::operator=(param_2,aLStack112);
    }
    lib::L2CValue::~L2CValue(aLStack112);
  }
  if ((((byte)app::lua_bind::FighterManager__start_movie_impl & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(app::lua_bind::FighterManager__start_movie_impl), iVar6 != 0)) {
    this = (L2CTable *)operator.new(0x48);
    lib::L2CTable::L2CTable(this,0);
    lib::L2CValue::L2CValue((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,this);
    iVar6 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND01_CURE);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_01;
    uVar2 = _FIGHTER_LOG_MASK_FLAG_SHOOT;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND02_FLASH1);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar3 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_01;
    uVar2 = _FIGHTER_LOG_MASK_FLAG_SHOOT;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND03_FLASH2);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar3 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_02;
    uVar2 = _FIGHTER_LOG_MASK_FLAG_SHOOT;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND04_EXPLOSION1);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar3 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_02;
    uVar2 = _FIGHTER_LOG_MASK_FLAG_SHOOT;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND05_EXPLOSION2);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar3 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_03;
    uVar2 = _FIGHTER_LOG_MASK_FLAG_SHOOT;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND06_DEATHBALL1);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar3 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_03;
    uVar2 = _FIGHTER_LOG_MASK_FLAG_SHOOT;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND07_DEATHBALL2);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar3 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar2 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_04;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND08_FULLBURST);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar2 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_05;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND09_CRASH);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar2 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_06;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND10_STEEL);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar6 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND11_SPEED_UP);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar6 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND12_ATTACK_UP);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar6 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND13_REFLECT);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_07;
    uVar2 = _FIGHTER_LOG_MASK_FLAG_SHOOT;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND14_SLEEP);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar3 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar6 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar6 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND16_FLYING);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar2 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_08;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND17_FIRESWORD);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar2 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_08;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND18_ICESWORD);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar2 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_08;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND19_IRONSWORD);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar2 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_08;
    uVar1 = FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND20_DEVILSWORD);
    lib::L2CValue::L2CValue(aLStack96,uVar1 | uVar2);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    iVar6 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW;
    pLVar8 = (L2CValue *)
             lib::L2CValue::operator[]
                       ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,
                        _FIGHTER_BRAVE_SPECIAL_LW_COMMAND21_CHARGE);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::operator=(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    FUN_7100000300(lib::L2CValue::~L2CValue,app::lua_bind::WorkModule__get_param_float_impl,
                   &PTR_LOOP_71002d6000);
    __cxa_guard_release(app::lua_bind::FighterManager__start_movie_impl);
  }
  pLVar8 = (L2CValue *)
           lib::L2CValue::operator[]
                     ((L2CValue *)app::lua_bind::WorkModule__get_param_float_impl,param_2);
  lib::L2CValue::L2CValue(param_1,pLVar8);
  return;
}

